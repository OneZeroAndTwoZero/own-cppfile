#include<bits/stdc++.h>
using namespace std;

typedef struct{
    char val;
    int l, r;
} node;

string pre_order, in_order;
int cid = 0;
node tree[100005];

int build(int l, int r){
    if (l > r) return 0;
    char ch = pre_order[cid ++];
    tree[cid].val = ch;
    int temp = cid, pos = in_order.find(ch, l);
    tree[temp].l = build(l, pos - 1);
    tree[temp].r = build(pos + 1, r);
    return temp;
}

void post_order(int u){
    if (u == 0) return;
    post_order(tree[u].l);
    post_order(tree[u].r);
    cout << tree[u].val;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> pre_order >> in_order;
    build(0, pre_order.size() - 1);
    post_order(1);

    return 0;
}