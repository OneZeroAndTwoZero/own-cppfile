#include<bits/stdc++.h>
using namespace std;

int n;
char a[1005][1005] = {0};
int p[1005] = {0};
vector<int> node[1005];
vector<int> x[1005];
int cnt = 0;
bool vis[1005] = {0};

void dfs(int u,int num){
	node[num].push_back(u);
	x[num].push_back(p[u]);
	for(int i = 0;i < n;i ++){
		if(a[u][i] == '1'){
			int pos = i;
			if(!vis[pos]){
				vis[pos] = 1;
				dfs(i,num);
			}
		}
	}
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

	scanf("%d",&n);
	for(int i = 0;i < n;i ++){
		scanf("%d",&p[i]);
	}
	for(int i = 0;i < n;i ++){
		scanf("%s",&a[i]);
	}
	for(int i = 0;i < n;i ++){
		if(!vis[i]){
			vis[i] = 1;
			dfs(i,cnt);
			cnt ++;
		}
	}
	for(int i = 0;i < cnt;i ++){
		sort(x[i].begin(),x[i].end());
		sort(node[i].begin(),node[i].end());
		for(int j = 0;j < x[i].size();j ++){
			p[node[i][j]] = x[i][j];
		}
	}
	for(int i = 0;i < n;i ++){
		printf("%d%c",p[i]," \n"[i == n - 1]);
	}

	return 0;
}