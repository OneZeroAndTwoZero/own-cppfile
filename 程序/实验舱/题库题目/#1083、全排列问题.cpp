#include<bits/stdc++.h>
using namespace std;

int n;
int ans[10];
bool vis[10] = {0};

void dfs(int k){
	if(k == n + 1){
		for(int i = 1;i <= n;i++){
			cout << ans[i] << " ";
		}
		cout << endl;
		return;
	}
	for(int i = 1;i <= n;i++){
		if(!vis[i]){
			vis[i] = 1;
			ans[k] = i;
			dfs(k + 1);
			vis[i] = 0;
		}
	}
}

int main(){
//	#ifndef ONLINE_JUDGE
//	freopen("datai.in","r",stdin);
//	freopen("datao.out","w",stdout);
//	#endif
	cin >> n;
	dfs(1);

	return 0;
}

