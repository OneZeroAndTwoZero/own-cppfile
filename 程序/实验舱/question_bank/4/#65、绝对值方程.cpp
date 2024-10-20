#include<bits/stdc++.h>
using namespace std;

int a,b,ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
	
	scanf("%d %d",&a,&b);
	ans = a - 3 * b;
	if(ans < 0){
		printf("No\n");
	}else if(ans == 0){
		printf("0\n");
	}else{
		printf("%d\n%d\n",ans,-ans);
	}
	
	return 0;
}