#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int id,n;
long long val[1000005];
int a[32][1000005];
int sum;
long long ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&id,&n);
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&val[i]);
        for(int k = 0;k <= 20;k ++){
            a[k][i] = (val[i] & (1LL << k)) / (1LL << k);
            a[k][i] ^= a[k][i - 1];
        }
    }
    for(int k = 0;k <= 20;k ++){
        sum = 0;
        for(int i = 1;i <= n;i ++){
            if(a[k][i]){
                ans += (1LL << k) * (i - sum);
                sum ++;
            }else{
                ans += (1LL << k) * sum;
            }
        }
    }
    printf("%lld\n",ans);

    return 0;
}