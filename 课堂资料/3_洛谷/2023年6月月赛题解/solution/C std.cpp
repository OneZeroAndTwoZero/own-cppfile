#include <bits/stdc++.h>
using namespace std;
const int N=20010;
int n,m,x,y,tot,cnt,flg[N],f[N],g[N],siz[N],a[N],deg[N];
vector <int> v[N],w[N];
bitset <N> b[N];
queue <int> q;
int findr (int x) {return (f[x]==x?x:f[x]=findr(f[x]));}
void merge (int x,int y) {
	int fx=findr(x),fy=findr(y);
	f[fx]=fy,siz[fy]+=(fx!=fy)*siz[fx];
}
int main () {
	scanf("%d%d",&n,&m);
	for (int i=1;i<=m;i++) {
		scanf("%d%d",&x,&y);
		v[x].push_back(y),deg[y]++;
	}
	for (int i=1;i<=n;i++) {f[i]=i,siz[i]=1;if (!deg[i]) {q.push(i);}}
	while (q.size()) {
		int u=q.front();q.pop();
		a[++tot]=u;
		for (auto w:v[u]) {if (--deg[w]==0) {q.push(w);}}
	}
	for (int i=n;i>=1;i--) {
		int x=a[i],len=v[x].size();
		for (int j=0;j<len;j++) {
			flg[j]=b[x][v[x][j]];
			b[x]|=b[v[x][j]];
		}
		b[x].reset();b[x].set(x);
		for (int j=len-1;j>=0;j--) {
			flg[j]|=b[x][v[x][j]];
			b[x]|=b[v[x][j]];
			if (!flg[j]) {w[x].push_back(v[x][j]);}
		}
		for (auto j:w[x]) {merge(j,w[x][0]);}
	}
	for (int i=1;i<=n;i++) {
		if (findr(i)==i) {g[i]=++cnt;}
		if (w[i].size()&&siz[findr(w[i][0])]!=w[i].size()) {printf("-1\n");return 0;}
	}
	printf("%d\n",++cnt);
	for (int i=1;i<=n;i++) {
		if (w[i].size()) {printf("%d %d %d\n",g[findr(i)],g[findr(w[i][0])],i);}
		else {printf("%d %d %d\n",g[findr(i)],cnt,i);}
	}
	return 0;
}
