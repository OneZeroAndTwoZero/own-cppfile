#include<bits/stdc++.h>
using namespace std;

int N, t;
int maxn = -1, minn = 114514;
int sum, cnt[2];

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &N);
	while (N --){
		scanf("%d", &t);
		sum += t;
		maxn = max(maxn, t), minn = min(minn, t);
		cnt[t & 1] ++;
	}
	printf("总和: %d\n", sum);
	printf("最大值: %d, 最小值: %d\n", maxn, minn);
	printf("偶数: %d, 奇数: %d\n", cnt[0], cnt[1]);
	
	return 0;
}
