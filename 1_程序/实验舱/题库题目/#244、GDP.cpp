#include<bits/stdc++.h>
using namespace std;

int n,q,idx,fi,wi;
int w[100005] = {0};
long long gdp[100005] = {0};
vector<int> a[100005];

long long g(int u){
	long long re = w[u];
	for(auto &&v : a[u]){
		re += g(v);
	}
	gdp[u] = re;
	return re;
}

int main(){
	scanf("%d %d",&n,&w[1]);
	for(int i = 2;i <= n;i ++){
		scanf("%d %d",&fi,&wi);
		a[fi].push_back(i);
		w[i] = wi;
	}
	g(1);
	scanf("%d",&q);
	while(q --){
		scanf("%d",&idx);
		printf("%lld\n",gdp[idx]);
	}

	return 0;
}

