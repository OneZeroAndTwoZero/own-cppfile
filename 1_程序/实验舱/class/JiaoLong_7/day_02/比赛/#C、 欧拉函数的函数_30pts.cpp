#include<bits/stdc++.h>
using namespace std;

int T,n,pos = 0;
long long ans = 0,mod = 1000000007;
bool vis[1000006];
int phi[1000006];
long long euler[1000006];

void Olashai(int n){
	for(int i = 2;i <= n;i ++){
		if(!vis[i]){
			euler[i] = i - 1;
			phi[pos ++] = i;
		}
		for(int j = 0;j < pos && i * phi[j] <= n;j ++){
			vis[i * phi[j]] = 1;
			// cout << i << "  " << euler[i] << " " << phi[j] << "  " << euler[phi[j]] << "[]\n";
			if(i % phi[j] == 0){
				euler[i * phi[j]] = euler[i] * (euler[phi[j]] + 1);
				break;
			}else{
				euler[i * phi[j]] = euler[i] * euler[phi[j]];
			}
		}
	}
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    scanf("%d",&T);
    euler[1] = 1LL;
    Olashai(1000000);
    //for(int i = 1;i <= 1000;i ++){
	//	cout << euler[i] << ";;\n";
	//}
    while(T --){
		ans = 0;
		scanf("%d",&n);
		for(int i = 233;i <= n - 233;i ++){
			ans += euler[i] * (n / i);
			ans %= mod;
		}
		printf("%lld\n",ans);
	}

    return 0;
}
