#include<bits/stdc++.h>
using namespace std;

int n;
long long ans = 1,mod = 998244353;
int num[10000006] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 2;i <= n;i ++){
        int t = i;
        for(int j = 2;j * j <= t;j ++){
            int cnt = 0;
            while(t % j == 0){
                cnt ++;
                t /= j;
            }
            num[j] = max(num[j],cnt);
        }
        if(t != 1){
            num[t] = max(num[t],1);
        }
    }
    for(int i = 2;i <= n;i ++){
        cout << i << ";;" << num[i] << endl;
    }
    for(long long i = 2;i <= n;i ++){
        while(num[i] > 0){
            ans = ans * i;
            ans %= mod;
            num[i] --;
            cout << i << " " << ans << " " << num[i] << endl;
        }
    }
    printf("%lld\n",ans % mod);

	return 0;
}
