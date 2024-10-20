#include<bits/stdc++.h>
using namespace std;

int n;
long long a[205][205] = {0};
long long b[205][205] = {0};
long long ans[205][205] = {0};

long long suan(int x,int y){
    long long res = 0;
    for(int i = 1;i <= n;i ++){
        res += a[x][i] * b[i][y];
    }
    return res;
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= n;j ++){
            scanf("%lld",&a[i][j]);
        }
    }
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= n;j ++){
            scanf("%lld",&b[i][j]);
        }
    }
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= n;j ++){
            ans[i][j] = suan(i,j);
            printf("%lld%c",ans[i][j]," \n"[j == n]);
        }
    }

	return 0;
}