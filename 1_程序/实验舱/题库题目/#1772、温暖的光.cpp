#include<bits/stdc++.h>
using namespace std;

int t,n;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&t);
    while(t --){
        scanf("%d",&n);
        if(n <= 3) printf("-1\n");
        else printf("%d\n",(n >> 1));
    }

	return 0;
}