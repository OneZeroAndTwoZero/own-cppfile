#include<bits/stdc++.h>
using namespace std;

int t,n,m,gs;
int a[105][105] = {0};

int main(){
	scanf("%d %d %d",&t,&n,&m);
	for(int i = 1;i <= t;i ++){
		for(int j = 0;j < n;j ++){
			scanf("%d",&a[i][j]);
		}
	}
	if(t == 1){
		printf("%d",m);
	}

	return 0;
}

//int tem = m;
//int ans = 0,t;
//for(int i = 0;i < n;i ++){
//	t = (m / a[0][i]) * a[1][i];
//	ans = max(ans,t);
//}
//while(m - ans > 0){
//	bool d = 1;
//	m = tem - ans;
//	for(int i = 0;i < n;i ++){
//		t = (m / a[0][i]) * a[1][i];
//		if(m >= a[0][i]) d = 0
//		ans = max(ans + t,ans + m);
//	}
//	if(d) break;
//}
//printf("%d",ans + )


//int dp[105][2] = {0};
//for(int i = 1;i <= t;i ++){
//	dp[i][0] = max(dp[i - 1][1] + a[i][0],dp[i - 1][0]);
//	if(m - )
//}

