#include<bits/stdc++.h>
using namespace std;

struct node{
    int id;
    int st;
    int jo;
};

int n,m,q;
int u,v;
int s,t,d;
vector<int> a[10005];
int ans[5005][5005][2] = {0};
bool vis[10005][2] = {0};

void bfs(int x){
    queue<node> q;
    q.push({x,0,0});
    while(q.size()){
        node t = q.front();
        q.pop();
        ans[x][t.id][t.jo] = t.st;
        for(auto && i : a[t.id]){
            if(!vis[i][!t.jo]){
                vis[i][!t.jo] = 1;
                q.push({i,t.st + 1,!t.jo});
            }
        }
    }
}

void out(){
    if(d % 2 == 0){
    	if(ans[s][t][0] == -1 || d < ans[s][t][0]){
    		printf("No\n");
    		return;
		}
		printf("Yes\n");
	}else{
		if(ans[s][t][1] == -1 || d < ans[s][t][1]){
    		printf("No\n");
    		return;
		}
		printf("Yes\n");
	}
}

int main(){
//#ifndef ONLINE_JUDGE
//    freopen("data.in","r",stdin);
//    freopen("data.out","w",stdout);
//#endif

    scanf("%d %d %d",&n,&m,&q);
    for(int i = 0;i <= n;i ++){
        for(int j = 0;j <= n;j ++){
            for(int k = 0;k < 2;k ++) ans[i][j][k] = -1;
        }
    }
    for(int i = 0;i < m;i ++){
        scanf("%d %d",&u,&v);
        a[v].push_back(u);
        a[u].push_back(v);
    }
    for(int i = 1;i <= n;i ++){
        for(int j = 0;j <= n;j ++){
            for(int k = 0;k < 2;k ++) vis[j][k] = 0;
        }
        vis[i][0] = 1;
        bfs(i);
    }
    while(q --){
        scanf("%d %d %d",&s,&t,&d);
        out();
    }

	return 0;
}
