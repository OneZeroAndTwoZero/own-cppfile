#include<bits/stdc++.h>
using namespace std;

int n,t,ans = 0;

int main(){
	scanf("%d",&n);
	while(n --){
		scanf("%d",&t);
		ans = ans ^ t;
	}
	printf("%d\n",ans);

	return 0;
}

