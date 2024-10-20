#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[1005][1005] = {0};
string ans[1005][1005];
bool vis[1005][1005] = {0};

string dfs(int x,int y){
    if(vis[x][y]){
        return ans[x][y];
    }
    vis[x][y] = 1;
    string s1 = "",s2 = "",res = "";
    int tx = x - 1,ty = y - 1;
    if(tx < 0){
        res = dfs(x,ty);
    }else if(ty < 0){
        res = dfs(tx,y);
    }else{
        s1 = dfs(x,ty);
        s2 = dfs(tx,y);
        res = min(s1,s2);
    }
    res.push_back(a[x][y] + '0');
    ans[x][y] = res;
    return res;
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

	scanf("%d %d",&n,&m);
	for(int i = 0;i < n;i ++){
		for(int j = 0;j < m;j ++){
			scanf("%d",&a[i][j]);
		}
	}
    vis[0][0] = 1;
    ans[0][0].push_back(a[0][0] + '0');
    dfs(n - 1,m - 1);
    cout << ans[n - 1][m - 1] << "\n";

	return 0;
}