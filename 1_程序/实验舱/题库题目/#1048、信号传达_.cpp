#include<bits/stdc++.h>
using namespace std;

int n,q,t;
int u,k,pos = 0;
vector<int> son[200005];
int ans[200005] = {0};
int num[200005];
int idx[200005];

void dfs(int u){
    idx[u] = pos,ans[pos ++] = u,num[u] = 1;
    for(auto && i : son[u]){
        dfs(i);
        num[u] += num[i];
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&q);
    for(int i = 2;i <= n;i ++){
        scanf("%d",&t);
        son[t].push_back(i);
    }
    dfs(1);
    while(q --){
        scanf("%d %d",&u,&k);
        if(k > num[u]) printf("-1\n");
        else printf("%d\n",ans[idx[u] + k - 1]);
    }

	return 0;
}