#include<bits/stdc++.h>
using namespace std;

int n,k,x,ans = 0,u;
vector<int> a[10005];
int fa[10005] = {0},d[10005] = {0},out[10005] = {0},pos = 0;

void dfs(int v){
	if(d[v] > ans){
		ans = d[v],u = v;
	}
	for(auto && i : a[v]){
		d[i] = d[v] + 1;
		dfs(i);
	}
}

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> k;
		while(k --){
			cin >> x;
			fa[x] = i + 1;
			a[i].push_back(x);
		}
	}
	for(int i = 0;i < n;i++){
		fa[i] -= 1;
		sort(a[i].begin(),a[i].end());
	}
	for(int i = 0;i < n;i++){
		if(fa[i] == -1){
			dfs(i);
		}
	}
	cout << ++ ans << endl;
	while(u >= 0){
		out[pos ++] = u;
		u = fa[u];
	}
	for(int i = pos - 1;i >= 0;i--){
		cout << out[i] << " ";
	}
	cout << endl;

	return 0;
}

