#include<bits/stdc++.h>
using namespace std;

int n,white;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif
	
	scanf("%d",&n);
	white = 4 * n + 2;
	printf("%d\n",white);
	
	return 0;
}
