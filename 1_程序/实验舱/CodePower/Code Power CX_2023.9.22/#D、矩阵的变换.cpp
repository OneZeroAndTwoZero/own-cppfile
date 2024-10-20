#include<bits/stdc++.h>
using namespace std;

int n,m;
long long k;
int a[300005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d %d %lld",&n,&m,&k);
	for(int i = 0;i < n;i ++){
		for(int j = 0;j < m;j ++){
			// 存成一维数组
			scanf("%d",&a[i * m + j]);
		}
	}
	k %= n * m;
	for(int i = 0;i < n * m;i ++){
		// 整体右移
		printf("%d ",a[(i - k + (n * m)) % (n * m)]);
		// 是否需要换行
		if((i + 1) % m == 0)
			printf("\n");
	}

	return 0;
}