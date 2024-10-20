#include<bits/stdc++.h>
#pragma GCC optimize(2)
#define ls(p) ((p << 1))
#define rs(p) ((p << 1) + 1)
#define len(p) (((tree[p].r - tree[p].l + 1)))
#define mid(p) (((tree[p].l + tree[p].r)) >> 1)
using namespace std;

struct node{
    int l, r;
    int val, tag;
};

int n, q, pos = 0;
int u, v;
int op, idx, x;
int tmp[200005];
int a[200005], fa[200005], dfn[200005], out[200005], h[200005];
vector<int> e[200005];
node tree[1000006];

void pushup(int p){
    tree[p].val = tree[ls(p)].val + tree[rs(p)].val;
}

void pushdown(int p){
    if (tree[p].l == tree[p].r) return;
    tree[ls(p)].val += len(ls(p)) * tree[p].tag;
    tree[rs(p)].val += len(rs(p)) * tree[p].tag;
    tree[ls(p)].tag += tree[p].tag, tree[rs(p)].tag += tree[p].tag;
    tree[p].tag = 0;
}

void erg(int u, int dep){
    dfn[u] = ++ pos;
    h[dfn[u]] = dep;
    if (h[dfn[u]] == -1) tmp[u] = -tmp[u];
	a[dfn[u]] = tmp[u];
    for (auto && i : e[u]){
        if (i == fa[u]) continue;
        fa[i] = u;
        erg(i, -dep);
    }
    out[u] = pos;
    // cout << u << " " << dfn[u] << " " << out[u] << ";;;" << endl;
}

void build(int p, int l, int r){
    // cout << p << " " << l << " " << r << endl;
    tree[p] = {l, r, 0, 0};
    if (l == r){
        
        tree[p].val = a[l];
        return;
    }
    // cout << p << " " << mid(p) << ";;;;" << endl;
    build(ls(p), l, mid(p));
    build(rs(p), mid(p) + 1, r);
	pushup(p);
}

void update(int p, int l, int r, int x){
    if (l <= tree[p].l && r >= tree[p].r){
        tree[p].val += x;
        tree[p].tag += x;
        return;
    }
    pushdown(p);
    if (l <= mid(p)) update(ls(p), l, r, x);
    if (r > mid(p)) update(rs(p), l, r, x);
    pushup(p);
}

int query(int p, int u){
    if (tree[p].l == u && tree[p].r == u){
        return h[tree[p].l] * tree[p].val;
    }
    pushdown(p);
    if (u <= mid(p)) return query(ls(p), u);
    else return query(rs(p), u);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d", &n, &q);
    for (int i = 1; i <= n; i ++){
        scanf("%d", &tmp[i]);
    }
    for (int i = 1; i < n; i ++){
        scanf("%d %d", &u, &v);
        e[u].push_back(v);
        e[v].push_back(u);
    }
    erg(1, 1);
    build(1, 1, n);
    // cout << "111\n";
    while (q --){
        scanf("%d %d", &op, &idx);
        if (op == 1){
            scanf("%d", &x);
            update(1, dfn[idx], out[idx], x * h[dfn[idx]]);
        }else{
            printf("%d\n", query(1, dfn[idx]));
        }
    }

    return 0;
}
