#include<bits/stdc++.h>
using namespace std;

int l,r,ans = 0;
int cnt[400005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&l,&r);
    for(int i = 1;i <= r;i ++){
        for(int j = 1;i * j <= r;j ++){
            cnt[i * j] ++;
        }
    }
    for(int i = l;i <= r;i ++){
        if(cnt[i] == 4) ans ++;
    }
    printf("The number of RSA numbers between %d and %d is %d\n",l,r,ans);

    return 0;
}