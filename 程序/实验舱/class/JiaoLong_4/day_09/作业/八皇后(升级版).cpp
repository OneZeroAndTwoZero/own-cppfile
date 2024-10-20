#include<bits/stdc++.h>
using namespace std;

int n;
int ans = 0;
int l[100],a[100],a2[100],a3[100];

void dfs(int k){
	if(k == n){
		if(ans < 3){
			for(int i = 0;i < n;i++){
				printf("%d ",l[i]);
			}
			puts("");
		}
		ans ++;
		return;
	}
	for(int i = 0;i < n;i ++){
		if(!a[i] && !a2[k + i] && !a3[k - i + n]){
			l[k] = i + 1;
			a[i] = a2[k + i] = a3[k - i + n] = 1;
			dfs(k + 1);
			a[i] = a2[k + i] = a3[k - i + n] = 0;
		}
	}
}

int main(){
	scanf("%d",&n);
	dfs(0);
	printf("%d\n",ans);

	return 0;
}

