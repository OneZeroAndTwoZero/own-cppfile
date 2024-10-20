#include<bits/stdc++.h>
using namespace std;

int n,m,ans = 0x3f3f3f3f;
int u,v;
int d[300005] = {0};
vector<int> a[300005];
int t[1005] = {0},check[1005] = {0};
bool vis[1005] = {0};

void dfs(int u,int st){
    if(check[u] > st) check[u] = st;
    for(auto && i : a[u]){
        if(!vis[i]){
            vis[i] = 1;
            dfs(i,st + 1);
        }
    }
}

void baoli(int k,int num){
    if(k == n + 1){
        if(num != m) return;
        for(int i = 1;i <= n;i ++){
            check[i] = 0x3f3f3f3f;
            //printf("%d%c",t[i]," \n"[i == n]);
        }
        for(int i = 1;i <= n;i ++){
            if(!t[i]) continue;
            for(int j = 0;j <= n;j ++)
                vis[j] = 0;
            vis[i] = 1;
            if(d[i]) check[i] = 0;
            dfs(i,0);
        }
        int cnt = 0;
        for(int i = 1;i <= n;i ++){
            //cout << i << "  " << d[i] << " " << check[i] << endl;
            if(d[i]) cnt = max(cnt,check[i]);
        }
        ans = min(ans,cnt);
        return;
    }
    if(num > m) return;
    t[k] = 1;
    baoli(k + 1,num + 1);
    t[k] = 0;
    baoli(k + 1,num);
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&d[i]);
    }
    for(int i = 1;i < n;i ++){
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    if(n <= 20){
        baoli(1,0);
        printf("%d\n",ans);
    }

	return 0;
}