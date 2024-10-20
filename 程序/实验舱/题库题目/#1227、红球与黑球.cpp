#include<bits/stdc++.h>
using namespace std;

int n,m;
long long ans[25][25];

long long dfs(int i,int j){
    if(i == 0 || j == 0)
        return 1;
    if(ans[i][j])
        return ans[i][j];
    ans[i][j] = dfs(i - 1,j) + dfs(i,j - 1);
    return ans[i][j];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    printf("%lld\n",dfs(n,m));

	return 0;
}