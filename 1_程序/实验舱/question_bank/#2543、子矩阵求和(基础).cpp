#include<bits/stdc++.h>
using namespace std;

int n,m,q;
int sx,sy,ex,ey;
int a[105][105];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            scanf("%d",&a[i][j]);
            a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
        }
    }
    scanf("%d",&q);
    while(q --){
        scanf("%d %d %d %d",&sx,&sy,&ex,&ey);
        printf("%d\n",a[ex][ey] - a[sx - 1][ey] - a[ex][sy - 1]
        + a[sx - 1][sy - 1]);
    }

	return 0;
}