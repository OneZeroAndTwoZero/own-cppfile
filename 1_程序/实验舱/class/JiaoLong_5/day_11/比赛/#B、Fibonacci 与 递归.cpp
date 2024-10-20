#include<bits/stdc++.h>
using namespace std;

int ans[2500005] = {0};
int t,n;

int main(){
	scanf("%d",&t);
	ans[1] = ans[2] = 1;
	for(int i = 3;i <= 2000005;i ++){
		ans[i] = ans[i - 1] + ans[i - 2] + 1;
		ans[i] %= 93;
	}
	while(t --){
		scanf("%d",&n);
		printf("%d\n",ans[n]);
	}

	return 0;
}

