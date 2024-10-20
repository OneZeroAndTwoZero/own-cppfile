#include<bits/stdc++.h>
using namespace std;

long long n,check_num_5;
int a[200005];
long long ans = 0,mod = 1e9 + 7;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lld",&n);
    for(long long i = 0;i < n;i ++){
        scanf("%d",&a[i]);
        if(a[i] == 5) check_num_5 ++;
    }
    // if(check_num_5 == n){
    //     ans = (n * (n - 1)) / 2LL;
    //     ans %= mod;
    // }else 
    if(n <= 1000){
        for(long long i = 0;i < n;i ++){
            long long cnt = 0;
            for(long long j = i;j < n;j ++){
                if(a[j] == 5) cnt ++;
                else cnt = 0;
                ans += cnt;
                if(ans >= 1e9 + 7) ans %= mod;
            }
        }
    }else{
        long long pos = 0;
        while(pos < n){
            long long first_5 = -1,num = 0;
            for(long long i = pos;i < n;i ++,pos ++){
                if(a[i] == 5){
                    num ++;
                    if(first_5 == -1) first_5 = i;
                }else if(first_5 != -1){
                    break;
                }
            }
            // cout << first_5 << " " << num << "[]\n";
            for(long long i = num;i > 0;i --){
                ans += i * (first_5 + 1 + (num - i));
                ans %= mod;
            }
        }
    }
    printf("%lld\n",ans);

	return 0;
}