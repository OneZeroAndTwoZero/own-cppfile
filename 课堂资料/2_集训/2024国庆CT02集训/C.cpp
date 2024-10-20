#include<cstdio>
#include<cstring>
#include<algorithm>
#include<map>
using namespace std;

typedef long long LL;
const int N = 1e6 + 10;
const int T = 1e6;

int t, tot, Q;
int prm[N], c[N], ans[N], G[25][25];
bool vis[N];

struct Ans {
	int x, y;
	bool operator < (const Ans &a) const {
		return x == a.x ? y < a.y : x < a.x;
	}
} a[N << 2];
struct Query{
	int x, l, r, v, id;
	bool operator < (const Query &a) const {
		return x < a.x;
	}
} q[N << 1];

int read() {
	int x = 0, f = 1; char c = getchar();
	while(c < '0' || c > '9') f = (c == '-') ? -1 : 1, c = getchar();
	while(c >= '0' && c <= '9') x = x * 10 + c - 48, c = getchar();
	return x * f;
}

int Gcd(int a, int b) {
	while(b) {int c = a; a = b, b = c % b;}
	return a;
}

void Pre() {
	for(int i = 2; i <= 1000; i ++) {
		if(!vis[i]) prm[++ tot] = i;
		for(int j = 1; j <= tot && prm[j] * i <= 1000; j ++) {
			vis[prm[j] * i] = true;
			if(i % prm[j] == 0) break; 
		}
	}
	for(int i = 0; i <= 22; i ++)
		for(int j = 0; j <= 22; j ++)
			G[i][j] = Gcd(i, j);
}

void dfs(int x, int y, int r, int k, int op = 0) {
	
	if(!op) a[++ t] = (Ans) {x, y};

	if(k > tot) return;
	
	if(1LL * prm[k] * prm[k] * min(x, y) > T) return;
	
	LL p = x * prm[k];

	for(int i = 2; i <= 20; i ++) {
		p *= prm[k];
		if(p > T) break;
		int g = G[r][i];
		if(g == 1) continue;
		LL q = 1;
		for(int j = 0; j <= i; j ++) {
			if(q * y > T) break;
			dfs(p, y * q, g, k + 1);
			q *= prm[k];
		}
	}
	
	p = y * prm[k];
	
	for(int i = 2; i <= 22; i ++) {
		p *= prm[k];
		if(p > T) break;
		int g = G[r][i];
		if(g == 1) continue;
		LL q = 1;
		for(int j = 0; j < i; j ++) {
			if(q * x > T) break;
			dfs(x * q, p, g, k + 1);
			q *= prm[k];
		}
	}
	
	dfs(x, y, r, k + 1, 1);
}

void Add(int x) {for(; x <= T; x += x & -x) c[x] ++;}
int Ask(int x) {int sum = 0; for(; x; x -= x & -x) sum += c[x]; return sum;}

int main() {
    //freopen("pair.in","r",stdin);
    //freopen("pair.out","w",stdout);
	Pre();
	memset(vis, false, sizeof(vis));
	dfs(1, 1, 0, 1);
	printf("%d\n",t);
	sort(a + 1, a + t + 1);
	
	int m = read();
	for(int i = 1; i <= m; i ++) {
		int a = read() - 1, b = read();
		int c = read() - 1, d = read();
		q[++ Q] = (Query) {b, c, d, 1, i};
		q[++ Q] = (Query) {a, c, d, -1, i};
	}
	sort(q + 1, q + Q + 1);
	int p = 1;
	for(int i = 1; i <= Q; i ++) {
		while(p <= t && a[p].x <= q[i].x) {
			Add(a[p].y);
			p ++;
		}
		ans[q[i].id] += q[i].v * (Ask(q[i].r) - Ask(q[i].l));
	}

	for(int i = 1; i <= m; i ++) printf("%d\n", ans[i]);
	return 0;
}

