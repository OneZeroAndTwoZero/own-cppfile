#include<bits/stdc++.h>
using namespace std;

int n,l,t,ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&l);
    for(int i = 0;i < n;i++){
        scanf("%d",&t);
        ans += (t >= l);
    }
    printf("%d\n",ans);

    return 0;
}