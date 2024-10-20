#include<bits/stdc++.h>
using namespace std;

int ans = 0;
char c;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	while(~scanf("%c",&c)){
		if(c >= '0' && c <= '9') ans ++;
	}
	printf("%d\n",ans);

	return 0;
}

