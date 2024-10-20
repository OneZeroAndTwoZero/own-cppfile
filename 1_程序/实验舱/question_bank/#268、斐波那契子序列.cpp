#include<bits/stdc++.h>
using namespace std;

int n,ans = -1,cnt;
int a[10005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
    }
    for(int i = 0;i < n;i ++){
        for(int j = i + 1;j < n;j ++){
            int x1 = a[i],x2 = a[j],cnt = 2;
            for(int k = j + 1;k < n;k ++){
                if(a[k] != x1 + x2) continue;
                cnt ++;
                x1 = x2;
                x2 = a[k];
            }
            ans = max(ans,cnt);
        }
    }
    printf("%d\n",ans);

    return 0;
}
