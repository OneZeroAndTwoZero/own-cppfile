#include<bits/stdc++.h>
using namespace std;

int n,m,id,k,x,maxd;
vector<int> a[105];
int ans[105] = {0},d[105] = {0};

void dfs(int v){
	if(!a[v].size()){
		maxd = max(maxd,d[v]);
		ans[d[v]] ++;
		return;
	}
	for(auto &&i : a[v]){
		d[i] = d[v] + 1;
		
		dfs(i);
	}
}

int main(){
	cin >> n >> m;
	d[1] = 1;
	for(int i = 0;i < m;i++){
		cin >> id >> k;
		while(k --){
			cin >> x;
			a[id].push_back(x);
		}
	}
	dfs(1);
	for(int i = 1;i <= maxd;i++){
		cout << ans[i] << " ";
	}
	cout << endl;

	return 0;
}

