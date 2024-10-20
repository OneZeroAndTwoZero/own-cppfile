#include<bits/stdc++.h>
using namespace std;

int v,n;
int dp[20005] = {0};
int a[105] = {0};

int main(){
	scanf("%d %d",&v,&n);
	for(int i = 0;i <= v;i ++){
		dp[i] = 0x3f3f3f3f;
	}
	dp[0] = 0;
	for(int i = 0;i < n;i ++){
		scanf("%d",&a[i]);
	}
	for(int i = 0;i < n;i ++){
		for(int j = v;j >= a[i];j --){
			if(dp[j - a[i]] == 0) dp[j] = 0;
		}
	}
	for(int j = v;j >= 0;j --){
		if(dp[j] == 0){
			printf("%d\n",v - j);
			return 0;
		}
	}

	return 0;
}

