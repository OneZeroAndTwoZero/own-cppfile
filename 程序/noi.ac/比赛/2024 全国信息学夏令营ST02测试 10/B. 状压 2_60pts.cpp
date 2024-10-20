#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n, m;
int u, v;
int col[105];
int w[105];
int din[105];
vector<int> E[105];
unordered_map<long long, int> f[45];
long long ans[45];

long long operate(long long x){
	long long res = 0;
	for (int i = 0; i <= n; i ++){
		if (x & 1LL) res += w[i];
		x /= 2;
	}
	return res;
}

void solve1(){
	queue<int> q;
	for (int i = 1; i <= n; i ++){
		if (din[i]) continue;
		q.push(i);
		ans[i] = w[col[i]];
	}
	while (q.size()){
		int u = q.front();
		q.pop();
		for (auto && v : E[u]){
			ans[v] = max(ans[v], ans[u] + 1LL * w[col[v]]);
			din[v] --;
			if (!din[v]) q.push(v);
		}
	}
}

void topsort(){
	queue<int> q;
	for (int i = 1; i <= n; i ++){
		if (din[i]) continue;
		q.push(i);
		f[i][(1LL << col[i])] ++;
	}
	while (q.size()){
		int u = q.front();
		q.pop();
		for (auto && v : E[u]){
			for (auto && i : f[u]){
				long long s = i.first | (1LL << col[v]);
				f[v][s] ++;
			}
			din[v] --;
			if (din[v]) continue;
			q.push(v);
		}
		for (auto && i : f[u]){
			long long s = i.first;
			ans[u] = max(ans[u], operate(s));
		}
	}
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d %d", &n, &m);
	set<int> st;
	for (int i = 1; i <= n; i ++){
		scanf("%d", &col[i]);
		st.insert(col[i]);
	}
	for (int i = 1; i <= n; i ++){
		scanf("%d", &w[i]);
	}
	while (m --){
		scanf("%d %d", &u, &v);
		E[u].push_back(v);
		din[v] ++;
	}
	if ((int)(st.size()) == n) solve1();
	else topsort();
	for (int i = 1; i <= n; i ++){
		printf("%lld\n", ans[i]);
	}

    return 0;
}
