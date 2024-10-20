#include<bits/stdc++.h>
using namespace std;

int n;
long long t,ans;
int a[8] = {100,50,20,10,5,2,1};

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    while(~scanf("%d",&n)){
        ans = 0;
        if(n == 0) return 0;
        while(n --){
            scanf("%lld",&t);
            for(int i = 0;i < 7;i ++){
                ans += t / a[i];
                t %= a[i];
            }
        }
        printf("%lld\n",ans);
    }

    return 0;
}