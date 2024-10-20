#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

unordered_map<int,vector<int>> f;
int n,d,ans = -1;
int a[__len(6)];
int rem[__len(6)];

int dfs(int x){
    if(rem[x]) return rem[x];
    int res = a[x] + d;
    if(upper_bound(f[res].begin(),f[res].end(),x) == f[res].end()) return 1;
    int pos = *upper_bound(f[res].begin(),f[res].end(),x);
    rem[x] = dfs(pos) + 1;
    return rem[x];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&d);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
        f[a[i]].push_back(i);
    }
    for(int i = 0;i < n;i ++){
        ans = max(ans,dfs(i));
    }
    printf("%d\n",ans);

    return 0;
}