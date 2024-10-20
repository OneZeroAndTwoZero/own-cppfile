#include<bits/stdc++.h>
using namespace std;

int n,m,max_ = 0;
int u,v;
vector<int> a[200005];
int d[200005] = {0};
int ans[200005] = {0};

int dfs(int x){
    if(ans[x] != 0) return ans[x];
    ans[x] = 1;
    for(auto && i : a[x]){
        if(d[i] > d[x]){
            ans[x] = max(ans[x],dfs(i) + 1);
        }
    }
    return ans[x];
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d %d",&n,&m);
    for(int i = 0;i < m;i ++){
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
        d[u] ++,d[v] ++;
    }
    for(int i = 1;i <= n;i ++){
        max_ = max(max_,dfs(i));
    }
    printf("%d\n",max_);

	return 0;
}