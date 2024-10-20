#include<bits/stdc++.h>
using namespace std;

int n, a[100005];

int dfs(int l, int r){
    if (l == r) return a[l];
    int mid = (l + r) >> 1;
    int res = max(dfs(l, mid), dfs(mid + 1, r));
    int maxl = a[mid], curl = a[mid];
    int maxr = a[mid + 1], curr = a[mid + 1];
    for (int i = mid - 1; i >= l; i --){
        curl += a[i];
        maxl = max(maxl, curl);
    }
    for (int i = mid + 2; i <= r; i ++){
        curr += a[i];
        maxr = max(maxr, curr);
    }
    res = max(res, maxl + maxr);
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
    for (int i = 0; i < n; i ++){
        scanf("%d", &a[i]);
    }
    printf("%d\n", dfs(0, n - 1));

    return 0;
}