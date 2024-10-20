#include<bits/stdc++.h>
using namespace std;

int n,q;
int sx,sy,ex,ey,c;
int sum[55][105][105];

int getans(){
    return sum[c][ex][ey] - sum[c][sx - 1][ey]
    - sum[c][ex][sy - 1] + sum[c][sx - 1][sy - 1];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&q);
    while(n --){
        scanf("%d %d %d",&sx,&sy,&c);
        sum[c][sx][sy] ++;
    }
    for(int k = 0;k <= 50;k ++){
        for(int i = 1;i <= 100;i ++){
            for(int j = 1;j <= 100;j ++){
                sum[k][i][j] += sum[k][i - 1][j]
                + sum[k][i][j - 1] - sum[k][i - 1][j - 1];
            }
        }
    }
    while(q --){
        scanf("%d %d %d %d %d",&sx,&sy,&ex,&ey,&c);
        printf("%d\n",getans());
    }

	return 0;
}