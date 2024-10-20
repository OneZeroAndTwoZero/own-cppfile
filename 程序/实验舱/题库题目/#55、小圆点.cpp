#include<bits/stdc++.h>
using namespace std;

int n,black;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif
	
	scanf("%d",&n);
	int black = n * (n / 2);
	printf("%d\n",black);
	
	return 0;
}
