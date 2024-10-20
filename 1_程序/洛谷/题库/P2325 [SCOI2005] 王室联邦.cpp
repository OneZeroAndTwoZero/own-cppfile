#include<bits/stdc++.h>
using namespace std;

int n, b, cid = 0;
int u, v;
vector<int> e[10004], stk, area[10004];
int star[10004], inarea[10004];
int fa[10004];

void erg(int x){
    // cout << x << "[]\n";
    int pos = stk.size();
    for (auto && i : e[x]){
        if (i == fa[x]) continue;
        fa[i] = x;
        erg(i);
        if (stk.size() - pos >= b){
            ++ cid;
            while (stk.size() > pos){
                area[cid].push_back(stk.back());
                // cout << stk.back() << ";;;\n";
                stk.pop_back();
            }
            star[cid] = x;
            // cout << cid << " " << star[cid] << " " << area[cid].size() << "\n";
        }
    }
    stk.push_back(x);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d", &n, &b);
    for (int i = 1; i < n; i ++){
        scanf("%d %d", &u, &v);
        e[u].push_back(v);
        e[v].push_back(u);
    }
    erg(1);
    if (stk.size() && !cid){
        star[++cid] = 1;
    }
    while (stk.size()){
        area[cid].push_back(stk.back());
        stk.pop_back();
    }
    printf("%d\n", cid);
    for (int i = 1; i <= cid; i ++){
        for (auto && k : area[i]){
            // cout << k << " " << i << "[]\n";
            inarea[k] = i;
        }
    }
    for (int i = 1; i <= n; i ++){
        printf("%d%c", inarea[i], " \n"[i == n]);
    }
    for (int i = 1; i <= cid; i ++){
        printf("%d%c", star[i], " \n"[i == cid]);
    }

    return 0;
}