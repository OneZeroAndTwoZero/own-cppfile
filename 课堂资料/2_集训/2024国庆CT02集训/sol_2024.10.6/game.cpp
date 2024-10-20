#include<bits/stdc++.h>
#define LL long long
#define U unsigned
#define MOD 998244353
#define MAXN 1001000
using namespace std;
template<typename T> void Read(T &cn)
{
	int sig = 1, c;
	while(!isdigit(c = getchar())) if(c == '-') sig = 0;
	if(sig) {cn = c-48; while(isdigit(c = getchar())) cn = cn*10-48+c; }
	else    {cn = 48-c; while(isdigit(c = getchar())) cn = cn*10+48-c; }
}
template<typename T> void Write(T cn)
{
	T cm = 0; int cx = cn%10, wei = 0; cn = cn/10;
	if(cn < 0 || cx < 0) {putchar('-'); cn = 0-cn; cx = 0-cx; }
	while(cn) cm = cm*10+cn%10, wei++, cn = cn/10;
	while(wei--) putchar(cm%10+48), cm = cm/10;
	putchar(cx+48);
}
template<typename T> void WriteS(T cn) {Write(cn); putchar(' '); }
template<typename T> void WriteL(T cn) {Write(cn); puts(""); }
template<typename T> void Max(T &cn, T cm) {cn = cn < cm ? cm : cn; }
template<typename T> void Min(T &cn, T cm) {cn = cn < cm ? cn : cm; }
int n, m, tlen, ro; 
int t[MAXN+1][2], fa[MAXN+1], typ[MAXN+1]; 
int ord[MAXN+1]; 
namespace GetTree{
	struct bian{
		int a, b, t; 
		void getit(int cn) {Read(a); Read(b); t = cn; if(a > b) swap(a, b); }
		inline friend bool operator <(bian cn, bian cm) {return cn.a == cm.a ? cn.b < cm.b : cn.a < cm.a; }
	};
	bian a[MAXN+1]; 
	pair<int, int> hao[MAXN+1]; 
	int bian[MAXN+1]; 
	int hlen; 
	int tou[MAXN+1], wei[MAXN+1], ne[MAXN+1]; 
	void ps(int cn, int cm) {hao[++hlen] = make_pair(cn, cm); }
	int jian(int cl, int cr, int ctail, int cfa)
	{
//		printf("in jian : cl = %d (%d) cr = %d (%d) ctail = %d cfa = %d\n",cl,bian[cl],cr,bian[cr],ctail,cfa); 
		int cn = ++tlen; fa[cn] = cfa; t[cn][0] = t[cn][1] = 0; 
		if(ctail >= tou[cl] && a[ctail].a == cl && a[ctail].b == cr) typ[cn] = 2, ord[a[ctail].t] = cn, ctail--; 
		if(cl == 1 && cr == n) typ[cn] = 1; 
		else if(cl == cr-1) {
			if((bian[cr]-bian[cl])&1) typ[cn] = 1; 
			else {
//				t[cn][0] = ++tlen; fa[tlen] = cn; t[tlen][0] = t[tlen][1] = 0; typ[tlen] = 1; 
//				t[cn][1] = ++tlen; fa[tlen] = cn; t[tlen][0] = t[tlen][1] = 0; typ[tlen] = 1; 
//				typ[cn] = 2; 
				typ[cn] = 0; 
			}
		}
		else typ[cn] = 2; 
		if(cl == cr-1) return cn; 
		if(ctail < tou[cl]) {
			t[cn][0] = jian(cl, cl+1, ctail, cn); 
			t[cn][1] = jian(cl+1, cr, wei[cl+1], cn); 
		}
		else {
			t[cn][0] = jian(cl, a[ctail].b, ctail, cn); 
			t[cn][1] = jian(a[ctail].b, cr, wei[a[ctail].b], cn); 
		}
		return cn; 
	}
	void doit()
	{
		for(int i = 1;i<=m;i++) a[i].getit(i); 
		
		hlen = 0; a[0].a = 1; a[0].b = n; 
		for(int i = 0;i<=m;i++) ps(a[i].a, i), ps(a[i].b, i); 
		sort(hao+1, hao+hlen+1); 
		int cur = 0; hao[0].first = hao[1].first-1; 
		for(int i = 1;i<=hlen;i++) 
		{
			if(hao[i].first != hao[i-1].first) bian[++cur] = hao[i].first; 
			if(hao[i].first == a[hao[i].second].a) a[hao[i].second].a = cur; 
			else a[hao[i].second].b = cur; 
		}
		n = cur; 
//		printf("n = %d\n",n); 
//		for(int i = 1;i<=n;i++) printf("bian[%d] = %d\n",i,bian[i]); 
//		for(int i = 1;i<=m;i++) printf("%d -> %d\n",a[i].a,a[i].b); 
		
		sort(a+1, a+m+1); 
		for(int i = 1;i<=n;i++) tou[i] = m+1, wei[i] = 0; 
		for(int i = 1;i<=m;i++) Min(tou[a[i].a], i), Max(wei[a[i].a], i); 
		tlen = 0; 
		ro = jian(1, n, wei[1], 0); 
//		printf("tlen = %d\n",tlen); 
//		for(int i = 1;i<=tlen;i++)
//		{
//			printf("i = %d\n",i); 
//			printf("  fa = %d [0] = %d [1] = %d typ = %d\n",fa[i],t[i][0],t[i][1], typ[i]); 
//		}
//		for(int i = 1;i<=m;i++) printf("ord[%d] = %d\n",i,ord[i]); 
	}
}
namespace GetAns{
	void Add(U LL &cn, U LL cm) {cn = (cn+cm >= MOD ? cn+cm-MOD : cn+cm); }
	struct Mtrx{
		U LL a[4][4]; 
		void setit1(int a00, int a01, int a10, int a11)
		{
			for(int i = 0;i<=3;i++) for(int j = 0;j<=3;j++) a[i][j] = 0; 
			a[0][0] = a[2][2] = a10; a[0][1] = a[2][3] = a11; 
			a[1][0] = a[3][2] = a00; a[1][1] = a[3][3] = a01; 
		}
		void setit2(int a00, int a01, int a10, int a11)
		{
			for(int i = 0;i<=3;i++) for(int j = 0;j<=3;j++) a[i][j] = 0; 
			a[0][0] = a[1][1] = a01; a[0][2] = a[1][3] = a11; 
			a[2][0] = a[3][1] = a00; a[2][2] = a[3][3] = a10; 
		}
		void setit3() {for(int i = 0;i<=3;i++) for(int j = 0;j<=3;j++) a[i][j] = (i==j); }
		void setit4() {for(int i = 0;i<=3;i++) for(int j = 0;j<=3;j++) a[i][j] = 0; a[0][1] = a[0][2] = 1; }
		void upd() {Add(a[0][3], a[0][0]); Add(a[1][3], a[1][0]), Add(a[2][3], a[2][0]); Add(a[3][3], a[3][0]); }
		void outit()
		{
			for(int i = 0;i<=3;i++)
			{
				printf("   "); 
				for(int j = 0;j<=3;j++) printf("%d ",(int)a[i][j]); puts(""); 
			}
		}
	};
	struct Vct{
		U LL a[4]; 
		void init() {a[0] = 1; a[1] = a[2] = a[3] = 0; }
	};
	void Mul(Mtrx &A, const Mtrx &B, const Mtrx &C)
	{
		for(int i = 0;i<=3;i++) for(int j = 0;j<=3;j++)
		{
			A.a[i][j] = (B.a[i][0]*C.a[0][j]+B.a[i][1]*C.a[1][j]+B.a[i][2]*C.a[2][j]+B.a[i][3]*C.a[3][j])%MOD; 
		}
	}
	void Mul(Vct &C, Vct A, const Mtrx &B) {for(int i = 0;i<=3;i++) C.a[i] = (A.a[0]*B.a[0][i]+A.a[1]*B.a[1][i]+A.a[2]*B.a[2][i]+A.a[3]*B.a[3][i])%MOD; }
	struct Seg{
		Mtrx t[MAXN*4+1]; 
		int n; 
		void build(int cn, int l, int r)
		{
			t[cn].setit3(); if(l == r) return; 
			int zh = (l+r)>>1; build(cn<<1, l, zh); build((cn<<1)|1, zh+1, r); 
		}
		void update(int cn) {Mul(t[cn], t[(cn<<1)|1], t[cn<<1]); }
		void gai(int cn, int cm, const Mtrx &cx, int l, int r)
		{
			if(l == r) {t[cn] = cx; return; }
			int zh = (l+r)>>1; 
			if(cm <= zh) gai(cn<<1, cm, cx, l, zh); 
			else gai((cn<<1)|1, cm, cx, zh+1, r); 
			update(cn); 
		}
		void gai2(int cn, int cm, int l, int r)
		{
			if(l == r) {t[cn].upd(); return; }
			int zh = (l+r)>>1; 
			if(cm <= zh) gai2(cn<<1, cm, l, zh); 
			else gai2((cn<<1)|1, cm, zh+1, r); 
			update(cn); 
		}
		void gai3(int cn, int cm, int l, int r)
		{
			if(l == r) {t[cn].setit4(); return; }
			int zh = (l+r)>>1; 
			if(cm <= zh) gai3(cn<<1, cm, l, zh); 
			else gai3((cn<<1)|1, cm, zh+1, r); 
			update(cn); 
		}
		void qiu(int cn, int cl, int cr, int l, int r, Vct &ans)
		{
			if(cl <= l && r <= cr) {Mul(ans, ans, t[cn]); return; }
			int zh = (l+r)>>1; 
			if(cr > zh) qiu((cn<<1)|1, cl, cr, zh+1, r, ans); 
			if(cl <= zh) qiu(cn<<1, cl, cr, l, zh, ans); 
		}
		void build(int cn) {n = cn; build(1, 1, n); }
		void gai(int cn, Mtrx &cx) {gai(1, cn, cx, 1, n); }
		void gai2(int cn) {gai2(1, cn, 1, n); }
		void gai3(int cn) {gai3(1, cn, 1, n); }
		void qiu(int cl, int cr, Vct &ans) {qiu(1,cl,cr,1,n,ans); }
	};
	int size[MAXN+1], top[MAXN+1], wei[MAXN+1], zhong[MAXN+1]; 
	int dfn[MAXN+1], lie[MAXN+1], shi; 
	Seg T; 
	void dfs1(int cn)
	{
		size[cn] = 1; 
		if(t[cn][0]) dfs1(t[cn][0]), size[cn] += size[t[cn][0]]; 
		if(t[cn][1]) dfs1(t[cn][1]), size[cn] += size[t[cn][1]]; 
		zhong[cn] = (size[t[cn][0]] <= size[t[cn][1]]); 
	}
	void dfs2(int cn)
	{
		dfn[cn] = ++shi; lie[shi] = cn; int lin = zhong[cn]; 
		if(t[cn][lin]) top[t[cn][lin]] = top[cn], dfs2(t[cn][lin]); lin ^= 1; 
		if(t[cn][lin]) top[t[cn][lin]] = t[cn][lin], dfs2(t[cn][lin]); 
	}
	Vct getVct(int cn) {Vct V; V.init(); T.qiu(dfn[top[cn]], dfn[wei[top[cn]]], V); return V; }
	Mtrx getMtrx(int cn)
	{
//		printf("in getMtrx : cn = %d\n",cn); 
		Mtrx M; 
		Vct V = getVct(cn); cn = top[cn]; 
//		printf("V = (%d, %d, %d, %d)\n",(int)V.a[0],(int)V.a[1],(int)V.a[2],(int)V.a[3]); 
		if(cn == t[fa[cn]][1]) M.setit1(V.a[0], V.a[1], V.a[2], V.a[3]); 
		else M.setit2(V.a[0], V.a[1], V.a[2], V.a[3]); 
		return M; 
	}
	void outit2(int cn)
	{
		Vct V; V.init(); T.qiu(dfn[cn], dfn[wei[top[cn]]], V); 
		printf("V = (%d, %d, %d, %d)\n",(int)V.a[0],(int)V.a[1],(int)V.a[2],(int)V.a[3]); 
	}
	void outAns() 
	{
//		printf("in outAns\n"); 
//		for(int i = 1;i<=tlen;i++) printf("%d : ",i), outit2(i); 
		Vct V = getVct(ro); 
//		printf("V = (%d, %d, %d, %d)\n",(int)V.a[0],(int)V.a[1],(int)V.a[2],(int)V.a[3]); 
		WriteL(V.a[3]); 
	}
	void geng(int cn)
	{
		Mtrx M; 
		T.gai2(dfn[cn]); 
		while(top[cn] != ro)
		{
			M = getMtrx(cn); 
			cn = fa[top[cn]]; if(typ[cn] == 1) M.upd(); 
			T.gai(dfn[cn], M); 
		}
	}
	void doit()
	{
		size[0] = 0; dfs1(ro); 
		shi = 0; top[ro] = ro; dfs2(ro); 
		for(int i = 1;i<=shi;i++) wei[top[lie[i]]] = lie[i]; 
		T.build(shi); 
//		for(int i = 1;i<=tlen;i++)
//		{
//			printf("size[%d] = %d dfn[%d] = %d top[%d] = %d wei[%d] = %d\n",i,size[i],i,dfn[i],i,top[i],i,wei[i]); 
//		}
		for(int i = shi;i>=1;i--) 
		{
			int y = lie[i]; 
			if(typ[y] == 1) T.gai2(i); 
			if(typ[y] == 0) T.gai3(i); 
			if(top[y] == ro) continue; 
			if(y != top[y] && typ[y] == 2) continue; 
			Mtrx M = getMtrx(y); 
			T.gai(dfn[fa[top[y]]], M); 
		}
//		outAns(); 
		for(int i = 1;i<=m;i++) typ[ord[i]] = 1, geng(ord[i]), outAns(); 
	}
}
signed main()
{
	freopen("game.in","r",stdin);
	freopen("game.out","w",stdout);
	Read(n); Read(m);
	cerr<<"OK"<<endl; 
	GetTree::doit(); 
	cerr<<"OK"<<endl;
	GetAns::doit(); 
	cerr<<"OK"<<endl;
	return 0;
}
/*
30 3
4 13
18 23
3 14
*/

