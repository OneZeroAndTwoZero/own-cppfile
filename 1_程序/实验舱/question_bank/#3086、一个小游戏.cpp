#include<bits/stdc++.h>
using namespace std;

int n,m,T;
int k,x,y,c;
bool p,vis[2005];
int col[2005],d[2005];
int a[1005][1005];
vector<int> ans;
vector<int> e[2005];

void __init(){
    ans.clear();
    p = 1;
    for(int i = 1;i <= n + m;i ++){
        e[i].clear();
        d[i] = 0;
        vis[i] = 0;
    }
}

void update(){
    scanf("%d",&k);
    while(k --){
        scanf("%d %d %d",&x,&y,&c);
        a[x][y] = c;
    }
}

bool topsort(){
    queue<int> q;
    for(int i = 1;i <= n + m;i ++){
        if(d[i]) continue;
        q.push(i);
        vis[i] = 1;
    }
    while(q.size()){
        int t = q.front();
        q.pop();
        ans.push_back(t);
        for(auto && i : e[t]){
            d[i] --;
            if(d[i] == 0){
                vis[i] = 1;
                q.push(i);
            }
        }
    }
    for(int i = 1;i <= n + m;i ++){
        if(d[i]) return 0;
    }
    for(int i = 1;i <= n + m;i ++){
        if(vis[i]) continue;
        ans.push_back(i);
    }
    return 1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d",&n,&m,&T);
    for(int i = 1;i <= n + m;i ++){
        scanf("%d",&col[i]);
    }
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int t = 0;t < T;t ++){
        __init();
        if(t) update();
        for(int i = 1;i <= n;i ++){
            for(int j = 1;j <= m;j ++){
                if(a[i][j] == col[j] && a[i][j] == col[n + m - i + 1]) continue;
                if(a[i][j] == col[j]){
                    e[n + m - i + 1].push_back(j);
                    d[j] ++;
                }else if(a[i][j] == col[n + m - i + 1]){
                    e[j].push_back(n + m - i + 1);
                    d[n + m - i + 1] ++;
                }else{
                    p = 0;
                }
            }
        }
        if(p && topsort()){
            printf("%d\n",ans.size());
            for(int i = 0;i < ans.size();i ++){
                printf("%d%c",ans[i]," \n"[i == ans.size() - 1]);
            }
        }else{
            printf("0\n");
        }
    }

    return 0;
}