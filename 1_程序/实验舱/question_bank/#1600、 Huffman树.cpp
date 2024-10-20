#include<bits/stdc++.h>
using namespace std;

struct node{
    long long val, l, r;
    bool operator < (const node &a) const{
        return val > a.val;
    }
};

int n, pos = 0;
long long ans = 0;
node tree[100005];
long long p[100005];
priority_queue<node> q;

void erg(int u, int dep){
    if (u == 0) return;
    if (tree[u].l == 0 && tree[u].r == 0){
        ans += 1LL * dep * tree[u].val;
        return;
    }
    erg(tree[u].l, dep + 1);
    erg(tree[u].r,dep + 1);
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
    for (int i = 0; i < n; i ++){
        scanf("%d", &p[i]);
        q.push({p[i], 0, 0});
    }
    while (q.size() > 1){
        node temp1 = q.top();
        q.pop();
        node temp2 = q.top();
        q.pop();
        tree[++ pos] = temp1;
        tree[++ pos] = temp2;
        q.push({temp1.val + temp2.val, pos - 1, pos});
    }
    tree[++ pos] = q.top();
    erg(pos, 0);
    printf("%lld\n", ans);

    return 0;
}