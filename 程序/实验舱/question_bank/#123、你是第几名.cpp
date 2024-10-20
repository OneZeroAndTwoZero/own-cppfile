#include<bits/stdc++.h>
using namespace std;

int n,x,t,ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&x);
    while(n --){
        scanf("%d",&t);
        ans += (t > x);
    }
    printf("%d\n",ans + 1);

    return 0;
}