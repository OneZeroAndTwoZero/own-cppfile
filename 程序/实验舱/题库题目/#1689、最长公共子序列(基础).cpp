#include<bits/stdc++.h>
using namespace std;

string a,b;
int ans[10005][10005] = {0};

int dfs(int i,int j){
	if(i == -1 || j == -1) return 0;
	if(ans[i][j] != 0) return ans[i][j];
	if(a[i] == b[j]) ans[i][j] = dfs(i - 1,j - 1) + 1;
	ans[i][j] = max({ans[i][j],dfs(i - 1,j),dfs(i,j - 1)});
	return ans[i][j];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	cin >> a >> b;
	printf("%d\n",dfs(a.size() - 1,b.size() - 1));

	return 0;
}