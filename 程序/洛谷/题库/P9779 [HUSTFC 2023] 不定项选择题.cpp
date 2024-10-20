#include<bits/stdc++.h>
using namespace std;

int n;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    printf("%d\n",(1 << n) - 1);

	return 0;
}