#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n,pos = 0;
int vis[10000006];
int phi[2000006];
int cnt[2000006];

void Euler(int n){
    for(int i = 2;i <= n;i ++){
        if(!vis[i]){
            phi[pos ++] = i;
        }
        for(int j = 0;j < pos && i * phi[j] <= n;j ++){
            vis[i * phi[j]] = 1;
            if(i % phi[j] == 0) break;
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

    scanf("%d",&n);
    Euler(n);
    for(int i = 0;i < pos;i ++){
        for(int cur = phi[i];;cur *= phi[i]){
            cnt[i] += (n / cur);
            if(cur > n / phi[i]) break;
        }
    }
    for(int i = 0;i < pos;i ++){
        printf("%d %d\n",phi[i],cnt[i]);
    }

    return 0;
}