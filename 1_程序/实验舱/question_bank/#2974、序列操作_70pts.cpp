#include<bits/stdc++.h>
using namespace std;

int T,n,k;
int l,r,ans;
int a[105];

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
        scanf("%d %d",&n,&k);
        for(int i = 0;i < n;i ++){
            scanf("%d",&a[i]);
        }
        sort(a,a + n,greater<int>());
        l = 0,r = 2 * k - 1,ans = 0;
        while(l < r){
            ans += (a[r] / a[l]);
            l ++,r --;
        }
        for(int i = 2 * k;i < n;i ++){
            ans += a[i];
        }
        printf("%d\n",ans);
    }

    return 0;
}