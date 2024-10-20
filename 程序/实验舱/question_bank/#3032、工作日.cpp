#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

struct node{
    int l,r;
    int lson,rson;
    int val,tag;
};

int n,q;
int op,l,r;
int tot = 0;
node tree[40000005];

int build(int l,int r){
    int root = ++ tot;
    tree[root] = {l,r,0,0,r - l + 1,1};
    return root;
}

void push(int pos,int val){
    tree[pos].val = (tree[pos].r - tree[pos].l + 1) * val;
    tree[pos].tag = val;
}

void pushup(int pos){
    tree[pos].val = tree[tree[pos].lson].val + tree[tree[pos].rson].val;
}

void pushdown(int pos){
    if(tree[pos].tag == -1) return;
    push(tree[pos].lson,tree[pos].tag);
    push(tree[pos].rson,tree[pos].tag);
    tree[pos].tag = -1;
}

void update(int pos,int l,int r,int val){
    if(l <= tree[pos].l && r >= tree[pos].r){
        tree[pos].val = (tree[pos].r - tree[pos].l + 1) * val;
        tree[pos].tag = val;
        return;
    }
    int mid = (tree[pos].l + tree[pos].r) >> 1;
    if(tree[pos].lson == 0) tree[pos].lson = build(tree[pos].l,mid);
    if(tree[pos].rson == 0) tree[pos].rson = build(mid + 1,tree[pos].r);
    pushdown(pos);
    if(l <= mid){
        update(tree[pos].lson,l,r,val);
    }
    if(r > mid){
        update(tree[pos].rson,l,r,val);
    }
    pushup(pos);
}

int query(int pos,int l,int r){
    if(l <= tree[pos].l && r >= tree[pos].r){
        return tree[pos].val;
    }
    int mid = (tree[pos].l + tree[pos].r) >> 1,res = 0;
    if(tree[pos].lson == 0) tree[pos].lson = build(tree[pos].l,mid);
    if(tree[pos].rson == 0) tree[pos].rson = build(mid + 1,tree[pos].r);
    pushdown(pos);
    if(l <= mid){
        res += query(tree[pos].lson,l,r);
    }
    if(r > mid){
        res += query(tree[pos].rson,l,r);
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

    scanf("%d %d",&n,&q);
    build(1,n);
    while(q --){
        scanf("%d %d %d",&l,&r,&op);
        if(op == 1){
            update(1,l,r,0);
        }else{
            update(1,l,r,1);
        }
        printf("%d\n",query(1,1,n));
    }

    return 0;
}