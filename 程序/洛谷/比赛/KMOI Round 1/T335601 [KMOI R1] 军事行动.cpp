#include<bits/stdc++.h>
using namespace std;

struct node{
    int pos1,pos2;
    int st;
    bool operator < (const node &a) const{
        return st > a.st;
    }
};

int n,m,cnt = 0;
int f[2005];
int posx[2005],posy[2005];
bool vis[205][205] = {0};
int d[205][205] = {0};
int ans[205][205] = {0};
int dir[8][2] = {{-1,2},{1,2},{2,1},{-2,1},{-1,-2},{1,-2},{2,-1},{-2,-1}};
priority_queue<node> q;

void __init(){
    for(int i = 0;i <= m;i ++){
        for(int j = 0;j <= m;j ++){
            vis[i][j] = d[i][j] = 0;
        }
    }
}

void bfs(int k,int sx,int sy){
    vis[sx][sy] = 1;
    queue<int> qx,qy;
    qx.push(sx),qy.push(sy);
    while(qx.size()){
        int x = qx.front(),y = qy.front();
        qx.pop(),qy.pop();
        for(int i = 0;i < 8;i ++){
            int tx = x + dir[i][0],ty = y + dir[i][1];
            if(tx <= 0 || ty <= 0 || tx > m || ty > m) continue;
            if(vis[tx][ty]) continue;
            vis[tx][ty] = 1;
            d[tx][ty] = d[x][y] + 1;
            qx.push(tx),qy.push(ty);
        }
    }
    for(int i = 0;i < n;i ++){
        if(vis[posx[i]][posy[i]]){
            ans[k][i] = d[posx[i]][posy[i]];
        }else{
            ans[k][i] = 0x3f3f3f3f;
        }
    }
}

int find(int x){
    if(f[x] == x) return x;
    f[x] = find(f[x]);
    return f[x];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++){
        scanf("%d %d",&posx[i],&posy[i]);
    }
    for(int i = 0;i < n;i ++){
        __init();
        bfs(i,posx[i],posy[i]);
    }
    // for(int i = 0;i < n;i ++){
    //     for(int j = 0;j < n;j ++){
    //         printf("%d ",ans[i][j]);
    //     }
    //     printf("\n");
    // }
    for(int i = 0;i < n;i ++){
        f[i] = i;
    }
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j ++){
            q.push({i,j,ans[i][j]});
        }
    }
    while(q.size()){
        cout << q.size() << " " << q.top().pos1 << " " << q.top().pos2 << " " << q.top().st << " " << ";;;\n";
        if(find(q.top().pos1) != find(q.top().pos2)){
            cout << q.size() << "[]\n";
            cnt += q.top().st;
            f[find(q.top().pos1)] = find(q.top().pos2);
        }
        q.pop();
    }
    printf("%d\n",cnt + (n != 1));

	return 0;
}