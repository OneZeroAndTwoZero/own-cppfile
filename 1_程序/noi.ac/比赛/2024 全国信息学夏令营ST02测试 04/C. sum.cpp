#include<bits/stdc++.h>
#pragma GCC optimize(2)
#define ls(x) (x << 1)
#define rs(x) ((x << 1) + 1)
#define mid(p) (((tree[p].itel) + (tree[p].iter)) >> 1)
#define len(p) (((tree[p].iter) - (tree[p].itel)) + 1)
using namespace std;

struct node{
    int itel, iter;
    int sum, tag;
};

int n, q, cid = 0;
int op, x;
int fa[300005];
vector<int> a[300005];
int val[300005];
int dfn[300005], out[300005];
node tree[1000006];

void erg(int u){
    dfn[u] = ++ cid;
    for (auto && i : a[u]){
        erg(i);
    }
    out[u] = cid;
    // cout << u << " " << dfn[u] << " " << out[u] << "\n";
}

void pushup(int p){
    tree[p].sum = tree[ls(p)].sum + tree[rs(p)].sum;
}

void pushdown(int p){
    if (!tree[p].tag) return;
    tree[ls(p)].sum = len(ls(p)) - tree[ls(p)].sum;
    tree[rs(p)].sum = len(rs(p)) - tree[rs(p)].sum;
    tree[ls(p)].tag ^= tree[p].tag;
    tree[rs(p)].tag ^= tree[p].tag;
    tree[p].tag = 0;
}

void build(int p, int l, int r){
    tree[p] = {l, r, 0, 0};
    if (l == r){
        tree[p].sum = val[l];
        // cout << l << " ;;; " << val[l] << "\n";
        return;
    }
    int mid = (l + r) >> 1;
    build(ls(p), l, mid);
    build(rs(p), mid + 1, r);
    pushup(p);
}

void update(int p, int l, int r){
    // cout << p << " " << l << " " << r << "[]\n";
    if (l <= tree[p].itel && r >= tree[p].iter){
        // cout << p << " " << l << " " << r << "[]\n";
        int len = tree[p].iter - tree[p].itel + 1;
        tree[p].sum = len - tree[p].sum;
        tree[p].tag ^= 1;
        return;
    }
    pushdown(p);
    if (l <= mid(p)) update(ls(p), l, r);
    if (r >= mid(p) + 1) update(rs(p), l, r);
    pushup(p);
}

int query(int p, int l, int r){
    // cout << p << " " << l << " " << r << "[]\n";
    int res = 0;
    if (l <= tree[p].itel && r >= tree[p].iter){
        return tree[p].sum;
    }
    pushdown(p);
    if (l <= mid(p)) res += query(ls(p), l, r);
    if (r >= mid(p) + 1) res += query(rs(p), l, r);
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d", &n);
    for (int i = 2; i <= n; i ++){
        scanf("%d", &fa[i]);
        a[fa[i]].push_back(i);
    }
    erg(1);
    for (int i = 1; i <= n; i ++){
        scanf("%d", &val[dfn[i]]);
    }
    scanf("%d", &q);
    build(1, 1, n);
    while (q --){
        scanf("%d %d", &op, &x);
        if (op == 1){
            printf("%d\n", query(1, dfn[x], out[x]));
        }else{
            update(1, dfn[x], out[x]);
        }
        // for (int i = 1; i <= n; i ++){
        //     cout << query(1, dfn[i], out[i]) << " ";
        // }
        // cout << "\n";
    }

    return 0;
}