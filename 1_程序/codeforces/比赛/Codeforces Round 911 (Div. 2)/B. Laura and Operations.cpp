#include<bits/stdc++.h>
using namespace std;

int t,a,b,c;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&t);
    while(t --){
        scanf("%d %d %d",&a,&b,&c);
        printf("%d %d %d\n",!((b + c) & 1),!((a + c) & 1),!((a + b) & 1));
    }

    return 0;
}