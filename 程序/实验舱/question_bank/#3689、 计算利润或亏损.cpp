#include<bits/stdc++.h>
using namespace std;

int sell,cost;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    scanf("%d %d",&cost,&sell);
    printf("%d\n",sell - cost);

    return 0;
}
