#include<bits/stdc++.h>
using namespace std;

bool check[100] = {0};
int a[100] = {0};
int pos = 0;
long long n,ans = 0;

void bian(){
	while(n){
		check[++ pos] = n & 1;
		n /= 2;
	}
}

void dfs(int k){
	if(k == 0){
		ans = 0;
		for(int i = pos;i > 0;i --){
			ans = (ans << 1) + a[i];
		}
		printf("%lld\n",ans);
		return;
	}
	for(int i = 0;i <= check[k];i ++){
		a[k] = i;
		dfs(k - 1);
	}
}

int main(){
	scanf("%lld",&n);
	bian();
	dfs(pos);

	return 0;
}

