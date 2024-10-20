/*
	Author:Frozencode
*/
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
typedef long long ll;
typedef pair<ll,ll> pii;
const ll maxn = 200010;
const ll INF = 2147483647;
const ll mod = 998244353;
int t, n, u, v, dep[maxn];
vector <int> e[maxn];
bool vis[maxn];
bool check(int x){
	vis[x] = 1;
	int maxx = -1, minn = INF;
	bool flag = true;
	for(auto son : e[x]){
		if(vis[son]) continue;
		flag &= check(son);
		maxx = max(maxx, dep[son]);
		minn = min(minn, dep[son]);
		dep[x] = max(dep[x], dep[son] + 1);
	}
	if(maxx == -1) return flag;
	flag &= (maxx - minn <= 1);
	return flag;
}
int main(){
	ios::sync_with_stdio(false);
	cin >> t;
	while(t--){
		cin >> n;
		memset(vis, 0, sizeof(vis));
		for(int i = 1; i <= n; i++){
			e[i].clear();
			dep[i] = 1;
		}
		for(int i = 1; i < n; i++){
			cin >> u >> v;
			e[u].pb(v);
			e[v].pb(u);
		}
		cout << (check(1) ? "YES" : "NO") << "\n";
	}
	return 0;
}