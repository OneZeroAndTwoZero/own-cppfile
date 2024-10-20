#include<bits/stdc++.h>
using namespace std;

int n,q,t,k;
vector<int> son[200005];
vector<int> sum_size[200005];
int size[200005] = {0};

void erg(int u){
    size[u] = 1;
    for(auto && i : son[u]){
        erg(i);
        size[u] += size[i];
        sum_size[u].push_back(size[u] - 1);
    }
}

int dfs(int ui,int ki){
    if(ki > size[ui])
        return -1;
    if(ki == 1)
        return ui;
    ki --;
    int pos = lower_bound(sum_size[ui].begin(),sum_size[ui].end(),ki)
        - sum_size[ui].begin();
    if(pos == 0) return dfs(son[ui][pos],ki);
    return dfs(son[ui][pos],ki - sum_size[ui][pos - 1]);
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
    erg(1);
    while(q --){
        scanf("%d %d",&t,&k);
        printf("%d\n",dfs(t,k));
    }

	return 0;
}