#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int n,ans = 0;
int a[305][305];
vector<int> temp[2][305];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j ++){
            scanf("%d",&a[i][j]);
            temp[0][i].push_back(a[i][j]);
            temp[1][j].push_back(a[i][j]);
        }
    }
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j ++){
            ans += (temp[0][i] == temp[1][j]);
        }
    }
    printf("%d\n",ans);

    return 0;
}