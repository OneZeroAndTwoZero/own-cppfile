#include<bits/stdc++.h>
using namespace std;

long long n,k,m,t,ans = 0;
unordered_map<long long,int> zhao;

int main(){
	scanf("%lld %lld %lld",&n,&k,&m);
	for(int i = 0;i < n;i++){
		scanf("%lld",&t);
		zhao[t] = i + 1;
	}
	for(int i = 0;i < n;i++){
		scanf("%lld",&t);
		if(abs(zhao[m - t] - i - 1) >= k && zhao[m - t] != 0){
			ans ++;
		}
	}
	printf("%lld\n",ans);

	return 0;
}

