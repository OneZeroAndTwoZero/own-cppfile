#include<bits/stdc++.h>
using namespace std;

struct th{
	int cost;
	int val;
};

double t;
int n,q,ans;
th a[200005];

void dfs(int k,int num,int sc,int check){
	if(k == n){
		if(num <= 3 && sc % 10 == 0){
			ans = max(ans,check);
		}
		return;
	}
	if(num > 3) return;
	dfs(k + 1,num + 1,sc + a[k].cost,check + a[k].val);
	dfs(k + 1,num,sc,check);
}

int main(){
	scanf("%d",&q);
	while(q --){
		scanf("%d",&n);
		for(int i = 0;i < n;i++){
			scanf("%lf %d",&t,&a[i].val);
			a[i].cost = 2 * t;
		}
		ans = 0;
		dfs(0,0,0,0);
		printf("%d\n",ans);
	}

	return 0;
}

