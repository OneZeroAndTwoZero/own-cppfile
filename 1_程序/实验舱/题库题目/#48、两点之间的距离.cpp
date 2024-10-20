#include<bits/stdc++.h>
using namespace std;

int a,b;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif
	
	scanf("%d %d",&a,&b);
	printf("%d\n",abs(a - b));
	
	return 0;
}
