#include<bits/stdc++.h>
using namespace std;

int n,m,q,k;
int op,x;
int cnt[3][200005];
int num[200005];
long long ans = 0;

int main(){
    scanf("%d %d %d %d",&n,&m,&q,&k);
    while(q --){
        scanf("%d %d",&op,&x);
        cnt[op][x] ++;
    }
    for(int i = 1;i <= m;i ++){
        cnt[2][i] %= k;
        num[cnt[2][i]] ++;
    }
    for(int i = 1;i <= n;i ++){
        cnt[1][i] %= k;
        ans += (m - num[(k - cnt[1][i]) % k]);
    }
    printf("%lld\n",ans);

	return 0;
}