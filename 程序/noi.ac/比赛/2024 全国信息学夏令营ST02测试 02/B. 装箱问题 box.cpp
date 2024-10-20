#include<bits/stdc++.h>
#pragma GCC optimize(2)
#define ls(x) (x << 1)
#define rs(x) ((x << 1) + 1)
#define mid(p) (((tree[p].itel) + (tree[p].iter)) >> 1)
#define len(p) (((tree[p].iter) - (tree[p].itel)) + 1)
using namespace std;

struct node{
    int itel, iter;
    int maxn;
};

int n;
int m, a[1000006];
node tree[4000006];

int solve1(){
    multiset<int> s;
    int res = 0;
    for (int i = 0; i <= n; i ++){
        s.insert(m);
    }
    for (int i = 0; i <= n; i ++){
        multiset<int> :: iterator pos = s.lower_bound(a[i]);
        if (*pos == m) res ++;
        int tem = *pos - a[i];
        s.erase(pos);
        s.insert(tem);
    }
    return res;
}

void pushup(int p){
    tree[p].maxn = max(tree[ls(p)].maxn,tree[rs(p)].maxn);
}

void build(int p, int l, int r){
    tree[p] = {l, r, 0};
    if (l == r){
        tree[p].maxn = m;
        return;
    }
    int mid = (l + r) >> 1;
    build(ls(p), l, mid);
    build(rs(p), mid + 1, r);
    pushup(p);
}

void update(int p, int l, int val){
    if (tree[p].itel == l && tree[p].iter == l){
        tree[p].maxn += val;
        return;
    }
    if (l <= mid(p)) update(ls(p), l, val);
    if (l >= mid(p) + 1) update(rs(p), l, val);
    pushup(p);
}

int query(int p, int val){ // first >= val
    if (tree[p].maxn < val) return -114514;
    if (tree[p].itel == tree[p].iter) return tree[p].itel;
    int res = -114514;
    res = query(ls(p), val);
    if (res > 0) return res;
    res = query(rs(p), val);
    return res;
}

int solve2(){
    int res = 0;
    build(1, 1, n);
    for (int i = 0; i < n; i ++){
        int pos = query(1, a[i]);
        // cout << pos << "[]\n";
        res = max(res, pos);
        update(1, pos, -a[i]);
    }
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

    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i ++){
        scanf("%d", &a[i]);
    }
    printf("%d %d\n", solve1(), solve2());

    return 0;
}