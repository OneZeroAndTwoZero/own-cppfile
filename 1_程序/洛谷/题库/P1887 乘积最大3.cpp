#include<bits/stdc++.h>
using namespace std;

int n,m,t1,t2;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    t1 = n / m,t2 = n % m;
    for(int i = 1;i <= m;i ++){
        if(i <= m - t2) printf("%d ",t1);
        else printf("%d ",t1 + 1);
    }

    return 0;
}