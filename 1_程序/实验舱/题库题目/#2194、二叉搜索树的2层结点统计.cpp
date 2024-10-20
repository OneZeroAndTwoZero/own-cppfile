#include<bits/stdc++.h>
using namespace std;

struct node{
    int val;
    int l = -1,r = -1;
};

int n,x,ans = 0,pos = 1;
node tree[1005];
int d[1005] = {0},max_d;

void build(int now,int p,int x,int deep){
    if(now == p){
        d[p] = deep;
        max_d = max(max_d,d[p]);
        return;
    }
    if(x <= tree[now].val){
        if(tree[now].l == -1)
            tree[now].l = p;
        build(tree[now].l,p,x,deep + 1);
    }else{
        if(tree[now].r == -1)
            tree[now].r = p;
        build(tree[now].r,p,x,deep + 1);
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&x);
        tree[pos].val = x;
        build(1,pos ++,x,0);
    }
    for(int i = 1;i < pos;i ++)
        if(d[i] + 1 >= max_d)
            ans ++;
    printf("%d\n",ans);

	return 0;
}