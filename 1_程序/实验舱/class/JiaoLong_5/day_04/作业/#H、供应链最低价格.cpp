#include<bits/stdc++.h>
using namespace std;

double p,r,val[100005],ans = 100000000000.0;
int n,x,num = 0,w;
vector<int> a[100005];

void dfs(int k){
	if(!a[k].size() && val[k] < ans){
		ans = val[k];
	}
	for(auto &&i : a[k]){
		val[i] = val[k] * r;
		dfs(i);
	}
}

int main(){
	scanf("%d %lf %lf",&n,&p,&r);
	r = 1 + (r / 100.0);
	for(int i = 0;i < n;i++){
		scanf("%d",&w);
		while(w --){
			scanf("%d",&x);
			a[i].push_back(x);
		}
	}
	val[0] = p;
	dfs(0);
	for(int i = 0;i < n;i++){
		if(!a[i].size() && val[i] == ans){
			num += 1;
		}
	}
	printf("%.4lf %d\n",ans,num);

	return 0;
}

