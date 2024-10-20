#include<bits/stdc++.h>
#define lowbit(x) ((x) & (-x))
using namespace std;

int n, ans = 0;
int a[10004];
map<int, int> mp;
unordered_map<int, int> f;
int C[10004];

void add(int id, int val){
    for (int i = id; i <= n; i += lowbit(i)){
        C[i] += val;
    }
}

int query(int id){
    int res = 0;
    for (int i = id; i; i -= lowbit(i)){
        res += C[i];
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
    for (int i = 1; i <= n; i ++){
        scanf("%d", &a[i]);
        mp[a[i]] = 1;
    }
    int cid = 0;
    for (auto && i : mp){
        // cout << i.first << " " << i.second << "\n";
        f[i.first] = ++ cid;
    }
    for (int i = 1; i <= n; i ++){
        a[i] = f[a[i]];
        // cout << a[i] << " ";
    }
    for (int i = 1; i <= n; i ++){
        int res = 0;
        for (int j = 1; j <= n; j ++) C[j] = 0;
        for (int j = i; j <= n; j ++){
            res += (query(n) - query(a[j]));
            ans ^= res;
            add(a[j], 1);
        }
    }
    printf("%d\n", ans);

    return 0;
}