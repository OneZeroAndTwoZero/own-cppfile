#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n,m,tot;
int op,x,y;
unordered_map<long long,int> f;
int fa[1000005];
int h[1000005];
int val[1000005];

int find(int x){
    if(x == fa[x]) return x;
    return find(fa[x]);
}

void merge(int x,int y){
    int fx = find(x),fy = find(y);
    fa[fx] = ++tot,fa[fy] = tot;
}

int getLCA(int x,int y){
    unordered_map<int,int> findnode;
    while(1){
        findnode[x] = 1;
        if(fa[x] == x) break;
        x = fa[x];
    }
    while(1){
        if(findnode[y]) return y;
        if(fa[y] == y) break;
        y = fa[y];
    }
    return -1;
}

int getval(int x,int y){
    int lca = getLCA(x,y);
    if(lca == -1) return 0;
    int res = 0;
    while(1){
        res += val[lca];
        if(fa[lca] == lca) break;
        lca = fa[lca];
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

    scanf("%d %d",&n,&m);
    tot = n;
    for(int i = 1;i <= 3 * n + 100;i ++){
        fa[i] = i;
    }
    if(n <= 1200 && m <= 12000){
        while(m --){
            scanf("%d %d",&op,&x);
            if(op == 1){
                scanf("%d",&y);
                f[(long long)x * 1000000 + y] ++;
                f[(long long)y * 1000000 + x] ++;
                merge(x,y);
            }else if(op == 2){
                val[find(x)] ++;
            }else{
                scanf("%d",&y);
                // cout << getval(x,y) << " " << f[(long long)x * 1000000 + y] << "[]\n";
                printf("%d\n",getval(x,y) + f[(long long)x * 1000000 + y]);
            }
        }
    }else{
        while(m --){
            scanf("%d %d %d",&op,&x,&y);
            if(op == 1){
                f[(long long)x * 1000000 + y] ++;
                f[(long long)y * 1000000 + x] ++;
            }else if(op == 3){
                printf("%d\n",f[(long long)x * 1000000 + y]);
            }
        }
    }

    return 0;
}