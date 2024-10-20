#include <bits/stdc++.h>
using namespace std;

struct node{
    int l,r,idx;
    double k,b;
};

int q,op;
int sx,sy,ex,ey;
int pre,idx;
double k,b;
node tree[4000005];

int turnx(int x){
    return (x + pre - 1) % 39989 + 1;
}

int turny(int x){
    return (x + pre - 1) % 1000000000 + 1;
}

void build(int p,int l,int r){
    tree[p].l = l,tree[p].r = r;
    if(l == r){
        return;
    }
    int mid = l + r >> 1;
    build(2 * p,l,mid);
    build(2 * p + 1,mid + 1,r);
}

int cmp(double a,double b){
    if(a - b > 0.000000001) return 1;
    if(b - a > 0.000000001) return -1;
    return 0;
}

void update(int p,int l,int r,double k,double b,int idx){
    if(l > tree[p].r || r < tree[p].l){
        return;
    }
    if(l <= tree[p].l && tree[p].r <= r){
        int L = tree[p].l,R = tree[p].r;
        int mid = (L + R) >> 1;
        int f1 = cmp(L * k + b,L * tree[p].k + tree[p].b);
        int f2 = cmp(R * k + b,R * tree[p].k + tree[p].b);
        if((f1 == 1 && f2 == 1) || (f1 > -1 && f2 > -1 && idx < tree[p].idx)){
            tree[p].k = k;
            tree[p].b = b;
            tree[p].idx = idx;
            return;
        }
        if(f1 == -1 && f2 == -1)return;
        if(f1 == -1){
            swap(tree[p].k,k);
            swap(tree[p].b,b);
            swap(tree[p].idx,idx);
        }
        if(cmp(mid * k + b,mid * tree[p].k + tree[p].b) == 1){
            swap(tree[p].k,k);
            swap(tree[p].b,b);
            swap(tree[p].idx,idx);
            update(2 * p + 1,l,r,k,b,idx);
        }else{
            update(2 * p,l,r,k,b,idx);
        }
        return;
    }
    update(2 * p,l,r,k,b,idx);
    update(2 * p + 1,l,r,k,b,idx);
}

pair<double,int> query(int p,int x){
    if(tree[p].l == tree[p].r){
        return {tree[p].k * x + tree[p].b,tree[p].idx};
    }
    int mid = (tree[p].l + tree[p].r) >> 1;
    pair<double,int> ans;
    if(x <= mid) ans = query(2 * p,x);
    else ans = query(2 * p + 1,x);
    if(cmp(tree[p].k * x + tree[p].b,ans.first) == 1){
        ans = {tree[p].k * x + tree[p].b,tree[p].idx};
    }
    if(!cmp(tree[p].k * x + tree[p].b,ans.first)){
        ans.second = min(ans.second,tree[p].idx);
    }
    return ans;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&q);
    build(1,1,100000);
    while(q --){
        scanf("%d",&op);
        if(op == 0){
            scanf("%d",&sx);
            sx = turnx(sx);
            pre = query(1,sx).second;
            printf("%d\n",pre);
        }else{
            scanf("%d %d %d %d",&sx,&sy,&ex,&ey);
            sx = turnx(sx),sy = turny(sy);
            ex = turnx(ex),ey = turny(ey);
            if(sx > ex){
                swap(sx,ex);
                swap(sy,ey);
            }
            if(ex - sx){
                k = 1.0 * (ey - sy) / (ex - sx);
                b = sy - sx * k;
            }else{
                k = 0,b = max(sy,ey);
            }
            idx ++;
            update(1,sx,ex,k,b,idx);
        }
    }
    return 0;
}