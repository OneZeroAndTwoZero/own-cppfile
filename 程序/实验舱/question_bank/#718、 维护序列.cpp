#include<bits/stdc++.h>
#define ls(x) (x << 1)
#define rs(x) ((x << 1) + 1)
#define mid(p) (((tree[p].itel) + (tree[p].iter)) >> 1)
#define len(p) (((tree[p].iter) - (tree[p].itel)) + 1)
using namespace std;

struct node{
    int itel, iter;
    long long sum, tagmul, tagadd;
};

int n, q;
int op, l, r;
long long x, mod;
long long a[1000006];
node tree[4000006];

void pushup(int p){
    // sum
    tree[p].sum = (tree[ls(p)].sum + tree[rs(p)].sum) % mod;
}

void pushdown(int p){
    if(tree[p].itel == tree[p].iter) return;
    // mul ans add sum
    tree[ls(p)].sum = (tree[ls(p)].sum * tree[p].tagmul + tree[p].tagadd * len(ls(p))) % mod;
    tree[rs(p)].sum = (tree[rs(p)].sum * tree[p].tagmul + tree[p].tagadd * len(rs(p))) % mod;
    // mul tagadd
    tree[ls(p)].tagadd = (tree[ls(p)].tagadd * tree[p].tagmul) % mod;
    tree[rs(p)].tagadd = (tree[rs(p)].tagadd * tree[p].tagmul) % mod;
    // mul tagmul
    tree[ls(p)].tagmul = (tree[ls(p)].tagmul * tree[p].tagmul) % mod;
    tree[rs(p)].tagmul = (tree[rs(p)].tagmul * tree[p].tagmul) % mod;
    // add tagadd
    tree[ls(p)].tagadd = (tree[ls(p)].tagadd + tree[p].tagadd) % mod;
    tree[rs(p)].tagadd = (tree[rs(p)].tagadd + tree[p].tagadd) % mod;
    // tag
    tree[p].tagadd = 0, tree[p].tagmul = 1;
}

void build(int p, int l, int r){
    tree[p] = {l, r, 0, 0, 0};
    tree[p].tagmul = 1;
    if (l == r){
        tree[p].sum = a[l] % mod;
        return;
    }
    int mid = (l + r) >> 1;
    build(ls(p), l, mid);
    build(rs(p), mid + 1, r);
    pushup(p);
}

void update(int p, int l, int r, long long val, int op){
    if (l <= tree[p].itel && r >= tree[p].iter){
        int len = tree[p].iter - tree[p].itel + 1;
        if (op == 2){ // add
            tree[p].sum += val * len;
            tree[p].tagadd += val;
            tree[p].sum %= mod, tree[p].tagadd %= mod;
        }else{ // mul
            tree[p].sum *= val;
            tree[p].tagmul *= val, tree[p].tagadd *= val;
            tree[p].sum %= mod, tree[p].tagmul %= mod, tree[p].tagadd %= mod;
        }
        return;
    }
    pushdown(p);
    if (l <= mid(p)) update(ls(p), l, r, val, op);
    if (r >= mid(p) + 1) update(rs(p), l, r, val, op);
    pushup(p);
}

long long query(int p, int l, int r){
    long long res = 0;
    if (l <= tree[p].itel && r >= tree[p].iter){
        return tree[p].sum;
    }
    pushdown(p);
    if (l <= mid(p)) res += query(ls(p), l, r);
    if (r >= mid(p) + 1) res += query(rs(p), l, r);
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

    scanf("%d %lld", &n, &mod);
    for (int i = 1; i <= n; i ++){
        scanf("%lld", &a[i]);
    }
    build(1, 1, n);
    scanf("%d", &q);
    while (q --){
        scanf("%d %d %d", &op, &l, &r);
        if (op == 1){
            scanf("%lld", &x);
            update(1, l, r, x, 1);
        }else if (op == 2){
            scanf("%lld", &x);
            update(1, l, r, x, 2);
        }else{
            printf("%lld\n", query(1, l, r) % mod);
        }
    }

    return 0;
}