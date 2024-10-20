#include<bits/stdc++.h>
using namespace std;

int n1, n2, m, ans = 0;
int u, v;
vector<int> E[10004];
bool vis[10004];
int pos[10004];

bool getmatch(int u){
    for (auto && i : E[u]){
        if (vis[i]) continue;
        vis[i] = 1;
        if (!pos[i] || getmatch(pos[i])){
            pos[i] = u;
            return 1;
        }
    }
    return 0;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d %d", &n1, &n2, &m);
    while (m --){
        scanf("%d %d", &u, &v);
        E[u].push_back(v + n1);
    }
    for (int i = 1; i <= n1; i ++){
        memset(vis, 0, sizeof(vis));
        if (getmatch(i)) ans ++;
    }
    printf("%d\n", ans);

    return 0;
}
