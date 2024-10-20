#include<bits/stdc++.h>
using namespace std;

int n,ans = 0,a,b;

int main(){
	scanf("%d",&n);
	while(n --){
		scanf("%d %d",&a,&b);
		ans += (a + b - 8);
	}
	printf("%d\n",ans);

	return 0;
}

