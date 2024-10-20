#include<bits/stdc++.h>
using namespace std;

int n,m,ans;
char a[3005][3005];
int sum[3005][3005];

bool check(int x1,int y1,int x2,int y2){
    if(sum[x2][y2] - sum[x1 - 1][y2] - sum[x2][y1 - 1] + sum[x1 - 1][y1 - 1]
    != (y2 - y1 + 1) * (x2 - x1 + 1)) return 0;

    if(sum[x2][y2 + 1] - sum[x1 - 1][y2 + 1] - sum[x2][y1 - 1] + sum[x1 - 1][y1 - 1]
    == (y2 + 1 - y1 + 1) * (x2 - x1 + 1)) return 0;
    if(sum[x2 + 1][y2] - sum[x1 - 1][y2] - sum[x2 + 1][y1 - 1] + sum[x1 - 1][y1 - 1]
    == (y2 - y1 + 1) * (x2 + 1 - x1 + 1)) return 0;
    if(x1 != 1)
        if(sum[x2][y2] - sum[x1 - 1 - 1][y2] - sum[x2][y1 - 1] + sum[x1 - 1 - 1][y1 - 1]
        == (y2 - y1 + 1) * (x2 - x1 + 1 + 1)) return 0;
    if(y1 != 1)
        if(sum[x2][y2] - sum[x1 - 1][y2] - sum[x2][y1 - 1 - 1] + sum[x1 - 1][y1 - 1 - 1]
        == (y2 - y1 + 1 + 1) * (x2 - x1 + 1)) return 0;

    return 1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        scanf("%s",a[i]);
    }
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            sum[i][j] = (a[i][j - 1] ^ 48) + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
        }
    }
    for(int x1 = 1;x1 <= n;x1 ++){
        for(int y1 = 1;y1 <= m;y1 ++){
            for(int x2 = x1;x2 <= n;x2 ++){
                for(int y2 = y1;y2 <= m;y2 ++){
                    if(check(x1,y1,x2,y2)) ans ++;
                }
            }
        }
    }
    printf("%d\n",ans);

	return 0;
}