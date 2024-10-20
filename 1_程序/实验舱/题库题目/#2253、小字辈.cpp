#include<bits/stdc++.h>
using namespace std;

int n,t,st,ans = 0;
int d[100005] = {0};
vector<int> a[100005];

void bianli(int u){
	ans = max(ans,d[u]);
	for(auto && v : a[u]){
		d[v] = d[u] + 1;
		bianli(v);
	}
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&t);
		if(t == -1){
			st = i;
		}else{
			a[t].push_back(i);
		}
	}
	d[st] = 1;
	bianli(st);
	printf("%d\n",ans);
	for(int i = 0;i < n;i++){
		if(d[i] == ans){
			printf("%d ",i);
		}
	}
	printf("\n");

	return 0;
}
