#include<bits/stdc++.h>
using namespace std;

int n,sum = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif
	
	scanf("%d",&n);
	for(int i = 1;i <= n;i++)
		sum += 1 + (i - 1) * 4;
	printf("%d\n",sum);
	
	return 0;
}
