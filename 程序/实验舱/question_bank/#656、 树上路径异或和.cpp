#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

struct node{
    int v, w;
};

int n, ans = 0, pos = 1;
int u, v, w;
int val[100005];
vector<node> a[100005];
int fa[100005];
int t[5000006][3], cnt[5000006];

void erg(int x){
    for (auto && i : a[x]){
        if (i.v == fa[x]) continue;
        fa[i.v] = x;
        val[i.v] = val[x] ^ i.w;
        erg(i.v);
    }
}

string turn(int x){
    string res = "";
    for (int i = 0; i < 32; i ++){
        res.push_back((x % 2) + '0');
        x >>= 1;
    }
    reverse(res.begin(), res.end());
    return res;
}

void add(string s){
    int p = 1;
    for (auto && i : s){
        if (!t[p][i - '0']){
            t[p][i - '0'] = ++ pos;
        }
        p = t[p][i - '0'];
    }
}

int query(string s){
    int p = 1, res = 0;
    for (auto && i : s){
        res <<= 1;
        if (t[p][1 - (i - '0')]){
            p = t[p][1 - (i - '0')];
            res ++;
        }else{
            p = t[p][i - '0'];
        }
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

    scanf("%d", &n);
    for (int i = 1; i < n; i ++){
        scanf("%d %d %d", &u, &v, &w);
        a[u].push_back({v, w});
        a[v].push_back({u, w});
    }
    erg(1);
    for (int i = 1; i <= n; i ++){
        add(turn(val[i]));
    }
    for (int i = 1; i <= n; i ++){
        ans = max(ans, query(turn(val[i])));
    }
    printf("%d\n", ans);

    return 0;
}