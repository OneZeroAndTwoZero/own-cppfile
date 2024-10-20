#include<bits/stdc++.h>
using namespace std;

int t,n,m;
int ans[3005][3005] = {0};

int main(){
	scanf("%d",&t);
	for(int i = 0;i <= 3000;i ++){
		for(int j = 0;j <= i;j ++){
			if(j == 0 || j == i) ans[i][j] = 1;
			else ans[i][j] = (ans[i - 1][j] + ans[i - 1][j - 1]) % 1000000007;
		}
	}
	while(t --){
		scanf("%d %d",&n,&m);
		long long cnt = 0;
		for(int i = 0;i <= n;i ++){
			cnt = (cnt + ans[i][m]) % 1000000007;
		}
		printf("%lld\n",cnt);
	}

	return 0;
}

