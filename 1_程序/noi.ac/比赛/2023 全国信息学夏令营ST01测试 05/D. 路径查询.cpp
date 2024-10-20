#include<bits/stdc++.h>
using namespace std;

int n,m,q;
int u,v;
int s,t,d;
int ans = 0;
vector<int> a[100005];

void dfs(int k,int x){
	if(k > d) return;
	if(x == t){
		if(d == k) ans = 1;
	}
	for(auto && i : a[x]){
		dfs(k + 1,i);
	}
}

int main(){

	cin >> n >> m >> q;
	while(m --){
		cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);
	}
	while(q--){
		cin >> s >> t >> d;
		ans = 0;
		dfs(0,s);
		if(ans){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}

	return 0;
}

