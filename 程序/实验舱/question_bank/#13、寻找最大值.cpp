#include<bits/stdc++.h>
using namespace std;

int n,t,maxn = -0x3f3f3f3f;

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
        maxn = max(maxn,t);
    }
    printf("%d\n",maxn);

    return 0;
}
