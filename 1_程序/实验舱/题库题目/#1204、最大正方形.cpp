#include<bits/stdc++.h>
using namespace std;

int n,m,ans = 0;
int sum[105][105] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++)
        for(int j = 1;j <= m;j ++){
            scanf("%d",&sum[i][j]);
            sum[i][j] += sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
        }
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            for(int l = 1;;l ++){
                if(l <= ans) continue;
                if(l <= ans || i + l - 1 > n || j + l - 1 > m) break;
                if(sum[i + l - 1][j + l - 1] - sum[i + l - 1][j - 1] - sum[i - 1][j + l - 1] + sum[i - 1][j - 1] == l * l)
                    ans = l;
            }
        }
    }
    printf("%d\n",ans);

	return 0;
}