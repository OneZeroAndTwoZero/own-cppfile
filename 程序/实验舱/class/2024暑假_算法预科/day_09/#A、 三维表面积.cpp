#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int n,ans = 0;
int dir[4][2] = {{1,0},{-1,0},{0,-1},{0,-1}};
int a[__len(3)][__len(3)];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= n;j ++){
            scanf("%d",&a[i][j]);
            if(!a[i][j]) continue;
            ans += 2;
        }
    }
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= n;j ++){
            for(int k = 0;k < 4;k ++){
                ans += max(0,a[i][j] - a[i + dir[k][0]][j + dir[k][1]]);
                // cout << i << " " << j << " " << a[i][j] - a[i + dir[k][0]][j + dir[k][1]] << "[]\n";
            }
        }
    }
    printf("%d\n",ans);

    return 0;
}