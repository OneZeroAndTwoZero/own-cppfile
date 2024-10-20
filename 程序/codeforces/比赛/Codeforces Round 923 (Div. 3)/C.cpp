#include<bits/stdc++.h>
using namespace std;

int T;
int n,m,k;
int a[400005],b[400005];
unordered_map<int,int> f1,f2;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&T);
    while(T --){
        scanf("%d %d %d",&n,&m,&k);
        bool ans = 1;
        int cnt1 = 0,cnt2 = 0;
        f1.clear(),f2.clear();
        for(int i = 0;i < n;i ++){
            scanf("%d",&a[i]);
            f1[a[i]] = 1;
        }
        for(int i = 0;i < m;i ++){
            scanf("%d",&b[i]);
            f2[b[i]] = 1;
        }
        for(int i = 1;i <= k;i ++){
            if(!(f1[i] || f2[i])){
                // printf("%d;;;\n",i);
                ans = 0;
            }else if(f1[i] && f1[i] ^ f2[i]){
                // printf("%d;\n",i);
                cnt1 ++;
            }else if(f2[i] && f1[i] ^ f2[i]){
                // printf("%d;;;\n",i);
                cnt2 ++;
            }
        }
        // printf("%d[][]%d\n",cnt1,cnt2);
        if(cnt1 * 2 > k || cnt2 * 2 > k) ans = 0;
        if(ans) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}