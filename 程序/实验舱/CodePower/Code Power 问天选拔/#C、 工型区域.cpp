#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int n,m,ans = -0x3f3f3f3f;
int a[__len(3)][__len(3)];

int operate(int x,int y){
    int res = 0;
    res += a[x][y] + a[x][y + 1] + a[x][y + 2];
    res += a[x + 1][y + 1];
    res += a[x + 2][y] + a[x + 2][y + 1] + a[x + 2][y + 2];
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 0;i < n - 2;i ++){
        for(int j = 0;j < m - 2;j ++){
            ans = max(ans,operate(i,j));
        }
    }
    printf("%d\n",ans);

    return 0;
}