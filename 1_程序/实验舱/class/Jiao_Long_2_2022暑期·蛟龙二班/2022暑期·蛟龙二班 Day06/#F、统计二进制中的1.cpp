#include<bits/stdc++.h>
using namespace std;

int n,ans = 0,t;

int main(){
	scanf("%d",&n);
	while(n --){
		scanf("%d",&t);
		while(t){
			ans += (t & 1);
			t >>= 1;
		}
	}
	printf("%d\n",ans);

	return 0;
}

