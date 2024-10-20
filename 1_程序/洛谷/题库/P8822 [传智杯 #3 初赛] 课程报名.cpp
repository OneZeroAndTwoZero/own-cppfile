#include<bits/stdc++.h>
using namespace std;

int n,v,m,a,ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d %d",&n,&v,&m,&a);
    for(int i = 1;i <= n;i ++){
        ans += v + ((i - 1) / m) * a;
    }
    printf("%d\n",ans);

    return 0;
}