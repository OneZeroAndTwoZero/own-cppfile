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
const ll maxn = 100010;
const ll INF = 2147483647;
const ll mod = 998244353;
int n, t, u, v, a[maxn], dep[maxn];
vector <int> e[maxn];
bool vis[maxn];
void bfs(){
	queue <pair<int,int>> q;
	q.push(mp(1, 0));
	vis[1] = 1;
	while(!q.empty()){
		pair<int,int> tmp = q.front();
		q.pop();
		dep[tmp.fi] = tmp.se;
		for(auto nxt : e[tmp.fi]){
			if(vis[nxt]) continue;
			q.push(mp(nxt, tmp.se + 1));
			vis[nxt] = 1;
		}
	}
	return;
}
int main(){
	ios::sync_with_stdio(false);
	cin >> n >> t;
	for(int i = 1; i < n; i++){
		cin >> u >> v;
		e[u].pb(v);
		e[v].pb(u);
	}
	bfs();
	while(t--){
		for(int i = 1; i <= n; i++) cin >> a[i];
		int maxx = -1;
		bool flag = true;
		memset(vis, 0, sizeof(vis));
		for(int i = 1; i <= n; i++){
			flag &= (vis[a[i]] == 0);
			flag &= dep[a[i]] >= maxx;
			vis[a[i]] = 1;
			maxx = max(maxx, dep[a[i]]);
		}
		cout << (flag ? "Yes" : "No") << "\n";
	}
	return 0;
}