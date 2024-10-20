#include<bits/stdc++.h>
using namespace std;

int n,m;
int u,v;
int cnt1 = 0,cnt2 = 0;
int ans_gang = 0,ans_ming = 0;
int c[1005] = {0};
bool vis[1005] = {0};
vector<int> a[1005];

void dfs(int x){
    cnt1 ++;
    cnt2 += c[x];
    for(auto && i : a[x]){
        if(!vis[i]){
            vis[i] = 1;
            dfs(i);
        }
    }
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&c[i]);
    }
    scanf("%d",&m);
    for(int i = 0;i < m;i ++){
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for(int i = 1;i <= n;i ++){
        if(!vis[i]){
            vis[i] = 1;
            cnt1 = 0,cnt2 = 0;
            dfs(i);
            ans_gang = max(ans_gang,cnt1);
            ans_ming = max(ans_ming,cnt2);
        }
    }
    printf("%d\n%d\n",ans_gang,ans_ming);

	return 0;
}