#include<bits/stdc++.h>
using namespace std;

double p,r,val[100005],ans;
int n,fa[100005] = {0},d[100005] = {0},x,s,ansd,num = 0;
vector<int> a[100005];

void dfs(int k){
	if(val[k] > ans){
		ans = val[k];
		ansd = d[k];
	}
	for(auto &&i : a[k]){
		val[i] = val[k] * r;
		d[i] = d[k] + 1;
		dfs(i);
	}
}

int main(){
	scanf("%d %lf %lf",&n,&p,&r);
	r = 1 + (r / 100.0);
	for(int i = 0;i < n;i++){
		scanf("%d",&x);
		fa[i] = x;
		if(fa[i] == -1) s = i;
		else a[x].push_back(i);
	}
	val[s] = p;
	dfs(s);
	for(int i = 0;i < n;i++){
		if(d[i] == ansd){
			num += 1;
		}
	}
	printf("%.2lf %d\n",ans,num);

	return 0;
}

