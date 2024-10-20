#include <bits/stdc++.h>
using namespace std;
const int N=200010,M=400010;
int n,m,x,y,tot,cnt,res,ax,ay,az,dfn[N],low[N],siz[M],dp[M],sn[M],f[M],bot[M],cha[M];
int dep[N],mdep[N],anc[N],vis[N],wsn[N];
vector <int> ans[N],v[N],u[M],nx[N];
stack <int> st;
void dfs (int x) {
	dfn[x]=low[x]=++tot;st.push(x);
	for (auto y:v[x]) {
		if (!dfn[y]) {
			dfs(y);low[x]=min(low[x],low[y]);
			if (low[y]>=dfn[x]) {
				cnt++;u[cnt].push_back(x),u[x].push_back(cnt);
				while (st.top()!=y) {u[cnt].push_back(st.top()),u[st.top()].push_back(cnt);st.pop();}
				u[cnt].push_back(st.top()),u[st.top()].push_back(cnt);st.pop();
			}
		}
		else {low[x]=min(low[x],dfn[y]);}
	}
}
void dfs1 (int x,int fa) {
	siz[x]=(x<=n),f[x]=fa;
	int mx=0,smx=0,tmx=0;
	for (auto y:u[x]) {
		if (y==fa) {continue;}
		dfs1(y,x);siz[x]+=siz[y];
		if (siz[y]>siz[mx]) {tmx=smx;smx=mx;mx=y;}
		else if (siz[y]>siz[smx]) {tmx=smx;smx=y;}
		else if (siz[y]>siz[tmx]) {tmx=y;}
	}
	if (x<=n) {
		dp[x]=max(dp[mx],siz[x]-siz[mx]);
		int tmp=max({dp[mx],dp[smx],n-siz[mx]-siz[smx]});
		if (tmp<res) {res=tmp,ax=(mx?bot[mx]:x),ay=(smx?bot[smx]:x),az=x;}
	} else {
		dp[x]=max(dp[mx],siz[smx]);
		int tmp=max({dp[mx],dp[smx],siz[tmx],n-siz[x]});
		if (tmp<res) {res=tmp,ax=(mx?bot[mx]:x),ay=(smx?bot[smx]:fa),az=(smx?x:fa);}
	}
	sn[x]=mx,bot[x]=(mx?bot[mx]:x);
}
void dfs2 (int x,int bd1,int bd2,int col) {
	if (x<=n) {ans[col].push_back(x);}
	for (auto y:u[x]) {
		if (y==bd1||y==bd2) {continue;}
		dfs2(y,x,0,col); 
	}
}
int dfs3 (int x,int z,int fa) {
	int res=(x==z);
	anc[x]=mdep[x]=fa,dep[x]=dep[fa]+1;
	for (auto y:v[x]) {
		if (dep[y]==-1) {
			if (dfs3(y,z,x)) {res=1,wsn[x]=y;}
			if (dep[mdep[y]]<dep[mdep[x]]) {mdep[x]=mdep[y];}
		} else if (dep[y]>0) {if (dep[y]<dep[mdep[x]]) {mdep[x]=y;}}
	}
	if (!res) {
		nx[mdep[x]].push_back(x);
		if (anc[x]!=mdep[x]) {nx[anc[x]].push_back(x);}
	}
	return res;
}
void dye (int x,int bd,int flg) {
	vis[x]=1;if (flg) {dfs2(x,bd,0,++cnt);}
	for (auto y:nx[x]) {if (!vis[y]) {dye(y,bd,1);}}
}
void solve (int a) {
	int y=cha[a],x=cha[a-1],z=cha[a+1];
	for (auto s:u[y]) {dep[s]=-1,anc[s]=vis[s]=mdep[s]=wsn[s]=0,nx[s].clear();}
	dfs3(x,z,0);dye(x,y,0);x=wsn[x];
	while (x!=z) {dye(x,y,1);x=wsn[x];}
	for (auto s:u[y]) {dep[s]=0;}
	dfs2(z,y,cha[a+2],++cnt);
}
int main () {
	scanf("%d%d",&n,&m);cnt=n,res=1e9;
	for (int i=1;i<=m;i++) {
		scanf("%d%d",&x,&y);
		v[x].push_back(y),v[y].push_back(x);
	}
	dfs(1);dfs1(1,0);tot=cnt=0;
	while (ay!=az) {cha[++tot]=ay;ay=f[ay];}
	while (az) {cha[++tot]=az;az=sn[az];}
	dfs2(cha[1],cha[2],0,++cnt);
	for (int i=2;i<=tot;i+=2) {solve(i);}
	printf("%d %d\n",res,cnt);
	for (int i=1;i<=cnt;i++) {
		printf("%llu",ans[i].size());
		for (auto x:ans[i]) {printf(" %d",x);}
		printf("\n");
	}
	return 0;
}
