#include<bits/stdc++.h>
using namespace std;

int x;
int minn = 114514,minpos;
int ans[100005];
bool vis[100005];

bool check(int x){
    if(x < 2) return 0;
    for(int i = 2;i <= x / i;i ++){
        if(x % i == 0) return 0;
    }
    return 1;
}


void bfs(){
    queue<int> q;
    q.push(x);
    vis[x] = 1;
    while(q.size()){
        int t = q.front();
        q.pop();
        for(int cur = -1;cur <= 1;cur ++){
            for(int i = 0,p = 1;i < 5;i ++,p *= 10){
                int change = (t / p) % 10,now = t;
                now -= change * p;
                change = (change + cur + 10) % 10;
                now += change * p;
                if(vis[now]) continue;
                vis[now] = 1;
                ans[now] = ans[t] + 1;
                q.push(now);
            }
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&x);
    bfs();
    for(int i = 99999;i >= 0;i --){
        if(ans[i] < minn && check(i)){
            minn = ans[i];
            minpos = i;
        }
    }
    printf("%05d\n",minpos);

	return 0;
}