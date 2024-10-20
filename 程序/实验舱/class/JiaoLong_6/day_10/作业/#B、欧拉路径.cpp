#include<bits/stdc++.h>
using namespace std;

int n,m;
int u,v,st,en;
vector<int> a[100005],ans;
int din[100005],dout[100005];
int cur[100005];

void dfs(int u){
	//i = cur[u]
	for(int i = cur[u];i < a[u].size();i = cur[u]){
		cur[u] ++;
		dfs(a[u][i]);
	}
	ans.push_back(u);
}

void error(){
	printf("No\n");
	exit(0);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

	scanf("%d %d",&n,&m);
	while(m --){
		scanf("%d %d",&u,&v);
		a[u].push_back(v);
		din[v] ++,dout[u] ++;
	}
	for(int i = 1;i <= n;i ++){
		sort(a[i].begin(),a[i].end());
		if(din[i] == dout[i]) continue;
		if(din[i] == dout[i] + 1){
			if(en) error();
			else en = i;
		}else if(din[i] == dout[i] - 1){
			if(st) error();
			else st = i;
		}else{
			error();
		}
	}
	if(st) dfs(st);
	else dfs(1);
	reverse(ans.begin(),ans.end());
	for(int i = 0;i < ans.size();i ++){
		printf("%d%c",ans[i]," \n"[i == ans.size() - 1]);
	}

    return 0;
}