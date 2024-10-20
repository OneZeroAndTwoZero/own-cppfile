#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n,p,t;
bool cnt[100005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    scanf("%d %d",&n,&p);
    while(n --){
        scanf("%d",&t);
        int cur = t % p;
        while(cnt[cur]){
            cur ++;
            cur %= p;
        }
        cnt[cur] = 1;
        printf("%d%c",cur," \n"[n == 0]);
    }

    return 0;
}