#include<bits/stdc++.h>
using namespace std;

int n,x,v,p,cur = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&x);
    x *= 100;
    for(int i = 1;i <= n;i ++){
        scanf("%d %d",&v,&p);
        cur += v * p;
        if(cur <= x) continue;
        printf("%d\n",i);
        return 0;
    }
    printf("-1\n");

    return 0;
}