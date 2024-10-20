#include<bits/stdc++.h>
using namespace std;

int n,k;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d",&n,&k);
    printf("%d\n",n / k);

	return 0;
}
