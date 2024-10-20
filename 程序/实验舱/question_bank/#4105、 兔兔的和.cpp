#include<bits/stdc++.h>
#define ls(x) (x << 1)
#define rs(x) ((x << 1) + 1)
#define mid(p) (((tree[id][p].itel) + (tree[id][p].iter)) >> 1)
#define len(p) (((tree[id][p].iter) - (tree[id][p].itel)) + 1)
#define inv2 ((((key) + 1) >> 1))
using namespace std;

struct node{
    int itel, iter;
    long long sum, tagmul, tagadd;
};

int n, q;
int op, l, r;
long long key = 616991993, inv;
long long x, mod = 1000000009;
long long a[100005];
node tree[3][400005];

long long qpow(long long a, long long b){
    int ans = 1;
    while (b){
        if (b & 1) ans = (ans * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return ans;
}

void pushup(int id, int p){
    // sum
    tree[id][p].sum = (tree[id][ls(p)].sum + tree[id][rs(p)].sum) % mod;
}

void pushdown(int id, int p){
    if(tree[id][p].itel == tree[id][p].iter) return;
    // mul ans add sum
    tree[id][ls(p)].sum = (tree[id][ls(p)].sum * tree[id][p].tagmul + tree[id][p].tagadd * len(ls(p))) % mod;
    tree[id][rs(p)].sum = (tree[id][rs(p)].sum * tree[id][p].tagmul + tree[id][p].tagadd * len(rs(p))) % mod;
    // mul tagadd
    tree[id][ls(p)].tagadd = (tree[id][ls(p)].tagadd * tree[id][p].tagmul) % mod;
    tree[id][rs(p)].tagadd = (tree[id][rs(p)].tagadd * tree[id][p].tagmul) % mod;
    // mul tagmul
    tree[id][ls(p)].tagmul = (tree[id][ls(p)].tagmul * tree[id][p].tagmul) % mod;
    tree[id][rs(p)].tagmul = (tree[id][rs(p)].tagmul * tree[id][p].tagmul) % mod;
    // add tagadd
    tree[id][ls(p)].tagadd = (tree[id][ls(p)].tagadd + tree[id][p].tagadd) % mod;
    tree[id][rs(p)].tagadd = (tree[id][rs(p)].tagadd + tree[id][p].tagadd) % mod;
    // tag
    tree[id][p].tagadd = 0, tree[id][p].tagmul = 1;
}

void build(int id, int p, int l, int r){
    tree[id][p] = {l, r, 0, 0, 0};
    tree[id][p].tagmul = 1;
    if (l == r){
        if (id == 1) tree[id][p].sum = qpow(((1 + key) / 2), a[l]);
        else tree[id][p].sum = qpow(((1 - key) / 2), a[l]);
        return;
    }
    int mid = (l + r) >> 1;
    build(id, ls(p), l, mid);
    build(id, rs(p), mid + 1, r);
    pushup(id, p);
}

void update(int id, int p, int l, int r, long long val, int op){
    if (l <= tree[id][p].itel && r >= tree[id][p].iter){
        int len = tree[id][p].iter - tree[id][p].itel + 1;
        if (op == 2){ // add
            tree[id][p].sum += val * len;
            tree[id][p].tagadd += val;
            tree[id][p].sum %= mod, tree[id][p].tagadd %= mod;
        }else{ // mul
            tree[id][p].sum *= val;
            tree[id][p].tagmul *= val, tree[id][p].tagadd *= val;
            tree[id][p].sum %= mod, tree[id][p].tagmul %= mod, tree[id][p].tagadd %= mod;
        }
        return;
    }
    pushdown(id, p);
    if (l <= mid(p)) update(id, ls(p), l, r, val, op);
    if (r >= mid(p) + 1) update(id, rs(p), l, r, val, op);
    pushup(id, p);
}

long long query(int id, int p, int l, int r){
    long long res = 0;
    if (l <= tree[id][p].itel && r >= tree[id][p].iter){
        return tree[id][p].sum;
    }
    pushdown(id, p);
    if (l <= mid(p)) res += query(id, ls(p), l, r);
    if (r >= mid(p) + 1) res += query(id, rs(p), l, r);
    return res % mod;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    inv = qpow(key, mod - 2);
    scanf("%d %d", &n, &q);
    for (int i = 1; i <= n; i ++){
        scanf("%lld", &a[i]);
    }
    build(1, 1, 1, n);
    build(2, 1, 1, n);
    while (q --){
        scanf("%d %d %d", &op, &l, &r);
        if (op == 1){
            scanf("%lld", &x);
            update(1, 1, l, r, qpow(((1 + key) / 2), x), 1);
            update(2, 1, l, r, qpow(((1 - key) / 2), x), 1);
        }else{
            long long res = query(1, 1, l, r) - query(2, 1, l, r) + mod;
            res = (res * inv) % mod;
            printf("%lld\n", res);
        }
    }

    return 0;
}