#include<bits/stdc++.h>
using namespace std;

int t,s,e;
bool vis[100005];
int dis[100005];

int turn(int x){
    int res = 0,p = 1;
    while(x){
        res += p * (x % 10);
        x /= 10,p *= 2;
    }
    return res;
}

bool check(int x,int a,int b){
    int cura = x & (1 << a),curb = x & (1 << b);
    if((cura == 0 && curb == 0) || (cura != 0 && curb != 0)) return 0;
    int x1 = a / 4,x2 = b / 4,y1 = a % 4,y2 = b % 4;
    if(x1 == x2 && abs(y1 - y2) == 1) return 1;
    if(y1 == y2 && abs(x1 - x2) == 1) return 1;
    return 0;
}

int update(int x,int a,int b){
    x ^= (1 << a);
    x ^= (1 << b);
    return x;
}

void bfs(){
    queue<int> q;
    q.push(s);
    vis[s] = 1;
    while(q.size()){
        int x = q.front();
        q.pop();
        for(int i = 0;i < 16;i ++){
            for(int j = i + 1;j < 16;j ++){
                if(!check(x,i,j)) continue;
                int t = update(x,i,j);
                if(vis[t]) continue;
                vis[t] = 1;
                dis[t] = dis[x] + 1;
                q.push(t);
            }
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i = 0;i < 4;i ++){
        s *= 16;
        scanf("%d",&t);
        s += turn(t);
    }
    for(int i = 0;i < 4;i ++){
        e *= 16;
        scanf("%d",&t);
        e += turn(t);
    }
    bfs();
    printf("%d\n",dis[e]);

    return 0;
}