#include<bits/stdc++.h>
using namespace std;

unordered_map<int,int> a;
long long ans,t;
int n;

void l(){
	if(t == 1) return;
	for(int i = 2;i <= t / i && t != 1;i++){
		while(t % i == 0){
			a[i] ++;
			t /= i;
		}
	}
	if(t != 1){
		a[t] ++;
	}
}

int main(){
	ans = 1;
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%lld",&t);
		l();
	}
	unordered_map<int,int> :: iterator it;
	for(it = a.begin();it != a.end();it++){
		ans = (((it -> second) + 1) * (ans % 1000000007)) % 1000000007;
	}
	printf("%lld\n",ans);

	return 0;
}

