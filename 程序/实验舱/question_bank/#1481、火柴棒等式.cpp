#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;
int f[15];

int count(int x){
    if(x == 0) return 6;
    int res = 0;
    while(x){
        res += f[x % 10];
        x /= 10;
    }
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

    f[0] = f[6] = f[9] = 6;
    f[1] = 2;
    f[2] = f[3] = f[5] = 5;
    f[4] = 4;
    f[7] = 3;
    f[8] = 7;
    scanf("%d",&n);
    for(int i = 0;i <= 1000;i ++){
        for(int j = 0;j <= 1000;j ++){
            if(count(i) + count(j) + count(i + j) == n - 4){
                ans ++;
            }
        }
    }
    printf("%d\n",ans);

    return 0;
}