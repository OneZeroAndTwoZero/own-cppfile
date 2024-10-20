#include<bits/stdc++.h>
using namespace std;

int s,t,ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&s,&t);
    ans = (t - s + 7) % 7;
    printf("%d\n",ans);

    return 0;
}