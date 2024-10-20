#include<bits/stdc++.h>
using namespace std;

int N, K, pos = 1, cnt = 0;
int a[2000006];
long long ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d %d", &N, &K);
	for (int i = 1; i <= N; i ++){
		scanf("%d", &a[i]);
	}
	for (int i = 1; i <= N; i ++){
		if (a[i] != a[i + 1]) cnt ++;
	}
	for(; pos <= K; pos ++){
		ans += cnt;
		if (a[pos] != a[pos + 1]) cnt --;
	}
	ans += 1LL * N * K;
	printf("%lld\n", ans);


    return 0;
}
