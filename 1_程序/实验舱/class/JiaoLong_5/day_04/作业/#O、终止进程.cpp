#include<bits/stdc++.h>
using namespace std;

int n,tem[105],t,ans[105] = {0},k,pos = 0;
vector<int> a[105];

void dfs(int u){
	ans[pos ++] = u;
	for(auto &&i : a[u]){
		dfs(i);
	}
}

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> tem[i];
	}
	for(int i = 0;i < n;i++){
		cin >> t;
		a[t].push_back(tem[i]);
	}
	cin >> k;
	dfs(k);
	sort(ans,ans + pos);
	for(int i = 0;i < pos;i++){
		cout << ans[i] << endl;
	}

	return 0;
}

