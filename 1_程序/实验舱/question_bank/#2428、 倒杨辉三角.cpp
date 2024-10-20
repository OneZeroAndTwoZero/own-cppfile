#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int n;
long long a[105][105];

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
        for(int j = 1;j <= i;j ++){
            if(j == 1 || j == i) a[i][j] = 1;
            else a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
        }
    }
    for(int i = n;i >= 1;i --){
        for(int k = 0;k < n - i;k ++) printf(" ");
        for(int j = 1;j <= i;j ++){
            printf("%lld%c",a[i][j]," \n"[j == i]);
        }
    }

    return 0;
}