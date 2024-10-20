#include<bits/stdc++.h>
using namespace std;

int n,m,ans = 0;
int sum[105][106];

bool check(int x1,int y1,int x2,int y2){
    int res = sum[x2][y2] - sum[x1 - 1][y2] - sum[x2][y1 - 1]
    + sum[x1 - 1][y1 - 1];
    return res == 0;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            scanf("%d",&sum[i][j]);
            sum[i][j] += sum[i - 1][j] + sum[i][j - 1]
            - sum[i - 1][j - 1];
        }
    }
    for(int x1 = 1;x1 <= n;x1 ++){
        for(int y1 = 1;y1 <= m;y1 ++){
            for(int x2 = x1;x2 <= n;x2 ++){
                for(int y2 = y1;y2 <= m;y2 ++){
                    if(!check(x1,y1,x2,y2)) continue;
                    ans = max(ans,(x2 - x1 + 1) * (y2 - y1 + 1));
                }
            }
        }
    }
    printf("%d\n",ans);

	return 0;
}