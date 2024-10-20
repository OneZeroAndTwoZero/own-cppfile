#include<bits/stdc++.h>
using namespace std;

int n,t;
int num[2];
long long ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    while(n --){
        scanf("%d",&t);
        num[t & 1] ++;
    }
    ans += (long long)num[0] * (num[0] - 1);
    ans += (long long)num[1] * (num[1] - 1);
    printf("%lld\n",ans);

    return 0;
}