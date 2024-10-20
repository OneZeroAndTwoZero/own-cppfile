#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n;
long long v[105][105];
long long ans = 0;
vector<int> a, b;

void update(){
    long long res = 0;
    for (auto && i : a){
        for (auto && j : b){
            res += v[i][j];
        }
    }
    ans = max(ans, res);
}

void dfs(int k){
    if (a.size() > (n / 2) || b.size() > (n / 2)){
        return;
    }
    if (k == n + 1){
    	update();
        return;
    }
    a.push_back(k);
    dfs(k + 1);
    a.pop_back();
    b.push_back(k);
    dfs(k + 1);
    b.pop_back();
}

int main(){
    scanf("%d", &n);
    n *= 2;
    for (int i = 1; i <= n; i ++){
        for (int j = 1; j <= n; j ++){
            scanf("%lld", &v[i][j]);
        }
    }
    dfs(1);
    printf("%lld\n", ans);

    return 0;
}
