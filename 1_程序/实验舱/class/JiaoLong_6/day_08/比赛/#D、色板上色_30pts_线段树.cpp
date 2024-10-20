#include<bits/stdc++.h>
using namespace std;

struct node{
    int l,r;
    int tag,val;
};

int l,t,o;
int le,ri,x;
string op;
node tree[31][400005];
int a[100005];

void pushdown(int co,int p){
    if(tree[co][p].l == tree[co][p].r || tree[co][p].tag == 0 && tree[co][p].val != 0) return;
    tree[co][2 * p].val = tree[co][p].tag * (tree[co][2 * p].r - tree[co][2 * p].l + 1);
    tree[co][2 * p + 1].val = tree[co][p].tag * (tree[co][2 * p + 1].r - tree[co][2 * p + 1].l + 1);
    tree[co][2 * p].tag = tree[co][p].tag;
    tree[co][2 * p + 1].tag = tree[co][p].tag;
    tree[co][p].tag = 0;
}

void build(int co,int p,int l,int r){
    tree[co][p] = {l,r,0,0};
    if(l == r){
        tree[co][p].val = (a[l] == co);
        return;
    }
    int mid = (l + r) >> 1;
    build(co,2 * p,l,mid);
    build(co,2 * p + 1,mid + 1,r);
    tree[co][p].val = tree[co][2 * p].val + tree[co][2 * p + 1].val;
}

void update(int co,int p,int l,int r,int val){
    if(l <= tree[co][p].l && r >= tree[co][p].r){
        // cout << co << " " << p << " " << l << " " << r << " " << val << "\\\\\n";
        // cout << tree[co][p].l << " " << tree[co][p].r << "\\\\\n";
        tree[co][p].val = val * (tree[co][p].r - tree[co][p].l + 1);
        tree[co][p].tag = val;
        return;
    }
    pushdown(co,p);
    int mid = (tree[co][p].l + tree[co][p].r) >> 1;
    if(l <= mid){
        update(co,2 * p,l,r,val);
    }
    if(r > mid){
        update(co,2 * p + 1,l,r,val);
    }
    tree[co][p].val = tree[co][2 * p].val + tree[co][2 * p + 1].val;
}

int find(int co,int p,int l,int r){
    if(l <= tree[co][p].l && r >= tree[co][p].r){
        return tree[co][p].val;
    }
    pushdown(co,p);
    int mid = (tree[co][p].l + tree[co][p].r) >> 1;
    long long res = 0;
    if(l <= mid){
        res += find(co,2 * p,l,r);
    }
    if(r > mid){
        res += find(co,2 * p + 1,l,r);
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

    cin >> l >> t >> o;
    for(int i = 1;i <= l;i ++){
        a[i] = 1;
    }
    for(int i = 1;i <= t;i ++){
        build(i,1,1,l);
        // cout << find(i,1,1,l) << "///\n";
    }
    while(o --){
        cin >> op;
        if(op == "C"){
            cin >> le >> ri >> x;
            for(int i = 1;i <= t;i ++){
                update(i,1,le,ri,0);
                // cout << i << " " << le << " " << ri << " " << find(i,1,le,ri) << "[]\n";
            }
            update(x,1,le,ri,1);
            // cout << find(x,1,le,ri) << "///\n";
            // cout << find(1,1,1,1) << "\\\n";
        }else{
            cin >> le >> ri;
            int cnt = 0;
            for(int i = 1;i <= t;i ++){
                // cout << i << " " << le << " " << ri << " " << find(i,1,le,ri) << ";;\n";
                if(find(i,1,le,ri)) cnt ++;
            }
            cout << cnt << "\n";
        }
    }

	return 0;
}