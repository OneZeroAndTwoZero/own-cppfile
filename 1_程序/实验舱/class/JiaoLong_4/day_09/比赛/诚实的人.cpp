#include<bits/stdc++.h>
using namespace std;

struct say{
	int w;
	bool r;
};

int n,t,ans = 0,now;
int num[20] = {0};
say a[20][1000];
bool check[20] = {0};

void dfs(int k){
	if(k == n + 1){
		now = 0;
		for(int i = 1;i <= n;i ++){
			if(check[i]){
				now ++;
				for(int j = 0;j < num[i];j ++){
					if(a[i][j].r != check[a[i][j].w]) return;
				}
			}
		}
		ans = max(ans,now);
		return;
	}
	check[k] = 0;
	dfs(k + 1);
	
	check[k] = 1;
	dfs(k + 1);
}

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		scanf("%d",&t);
		num[i] = t;
		for(int j = 0;j < t;j++){
			scanf("%d %d",&a[i][j].w,&a[i][j].r);
		}
	}
	dfs(1);
	printf("%d\n",ans);

	return 0;
}

