#include<bits/stdc++.h>
using namespace std;

int n,m;
int t,t1,t2;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++){
        scanf("%d",&t);
        t1 ^= t;
    }
    for(int i = 0;i < m;i ++){
        scanf("%d",&t);
        t2 ^= t;
    }
    if(n % 2 != 0 && m % 2 == 0) printf("%d\n",t2);
    else if(n % 2 == 0 && m % 2 != 0) printf("%d\n",t1);
    else if(n % 2 != 0 && m % 2 != 0) printf("%d\n",t1 ^ t2);
    else printf("0\n");

    return 0;
}