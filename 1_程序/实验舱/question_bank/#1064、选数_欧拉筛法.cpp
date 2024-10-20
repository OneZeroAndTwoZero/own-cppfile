#include<bits/stdc++.h>
using namespace std;

bool p[100000005] = {0};
int pri[6000005] = {0},pos = 0;
int n,k,sum,ans;
int a[105] = {0};

// 欧拉筛
void olshai(int x){
	for(int i = 2;i <= x;i ++){
		if(!p[i]){
			pri[pos ++] = i;
		}
		for(int j = 0;j < pos && pri[j] <= x / i;j ++){
			p[i * pri[j]] = 1;
			if(i % pri[j] == 0) break;
		}
	}
}

void dfs(int r,int sum,int x){
	if(r == n){
		if(x == k){
            // 是否被标记为合数
			if(!p[sum]) ans ++;
		}
		return;
	}
	dfs(r + 1,sum,x);
	dfs(r + 1,sum + a[r],x + 1);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d %d",&n,&k);
	for(int i = 0;i < n;i ++){
		scanf("%d",&a[i]);
	}
	sort(a,a + n);
    // 统计前k大的和(理论上被枚举出来的数的上限)
	for(int i = n - 1;n - 1 - i + 1 <= k;i --){
		sum += a[i];
	}
	olshai(sum);
	dfs(0,0,0);
	printf("%d\n",ans);

	return 0;
}