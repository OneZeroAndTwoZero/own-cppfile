#include<bits/stdc++.h>
using namespace std;

double p,r,val[100005],ans = 0;
int n,x,w,j[100005] = {0};
vector<int> a[100005];

void dfs(int k){
	ans += val[k] * j[k];
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
		if(!w){
			scanf("%d",&x);
			j[i] = x;
		}
		while(w --){
			scanf("%d",&x);
			a[i].push_back(x);
		}
	}
	val[0] = p;
	dfs(0);
	printf("%.1lf\n",ans);

	return 0;
}

