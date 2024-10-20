#include<bits/stdc++.h>
using namespace std;

int n,m,l,q;
int sx,sy,sz,ex,ey,ez;
long long sum[105][105][105];

void add(int i,int j,int k){
    sum[i][j][k] += 
    sum[i - 1][j][k] + sum[i][j - 1][k] + sum[i][j][k - 1]
    - sum[i][j - 1][k - 1] - sum[i - 1][j][k - 1] - sum[i - 1][j - 1][k]
    + sum[i - 1][j - 1][k - 1];
}

long long get(){
    return (sum[ex][ey][ez]
    - sum[sx - 1][ey][ez] - sum[ex][sy - 1][ez] - sum[ex][ey][sz - 1]
    + sum[sx - 1][sy - 1][ez] + sum[sx - 1][ey][sz - 1] + sum[ex][sy - 1][sz - 1]
    - sum[sx - 1][sy - 1][sz - 1]) % 1000000007;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d %d",&n,&m,&l);
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            for(int k = 1;k <= l;k ++){
                scanf("%lld",&sum[i][j][k]);
                add(i,j,k);
                // cout << i << " " << j << " " << k << " " << sum[i][j][k] << "[][]\n";
            }
        }
    }
    scanf("%d",&q);
    while(q --){
        scanf("%d %d %d %d %d %d",&sx,&sy,&sz,&ex,&ey,&ez);
        printf("%lld\n",get());
    }

	return 0;
}