#include<bits/stdc++.h>
using namespace std;

long long u,v,p;
int ans[1005];
int f[1005],op[1005];
bool vis[1005];

long long qpow(long long a,long long b){
    if(b == 0) return 1;
    long long res = qpow(a,(b >> 1));
    res = (res * res) % p;
    if(b & 1) res = (res * a) % p;
    return res;
}

void bfs(){
    queue<long long> q;
    q.push(u);
    vis[u] = 1;
    while(q.size()){
        long long t = q.front();
        q.pop();
        long long num = (t + 1) % p;
        if(!vis[num]){
            vis[num] = 1;
            ans[num] = ans[t] + 1;
            f[num] = t;
            op[num] = 1;
            q.push(num);
        }
        num = (t + p - 1) % p;
        if(!vis[num]){
            vis[num] = 1;
            ans[num] = ans[t] + 1;
            f[num] = t;
            op[num] = 2;
            q.push(num);
        }
        num = qpow(t,p - 2);
        if(!vis[num]){
            vis[num] = 1;
            ans[num] = ans[t] + 1;
            f[num] = t;
            op[num] = 3;
            q.push(num);
        }
    }
}

void out(int num){
    if(num == u){
        return;
    }
    out(f[num]);
    printf("%d ",op[num]);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lld %lld %lld",&u,&v,&p);
    bfs();
    printf("%d\n",ans[v]);
    out(v);

	return 0;
}