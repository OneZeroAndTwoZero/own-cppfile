#include<bits/stdc++.h>
#define lowbit(x) ((x) & (-x))
using namespace std;

long long N;
int K;
priority_queue<long long> q;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%lld %d", &N, &K);
	if (K > N){
		printf("-1\n");
		return 0;
	}
	while (N){
		q.push(lowbit(N));
		N -= lowbit(N);
	}
	if (q.size() > K){
		printf("-1\n");
		return 0;
	}
	while (q.size() < K){
		q.push(q.top() >> 1);
		q.push(q.top() >> 1);
		q.pop();
	}
	while (q.size()){
		printf("%lld ", q.top());
		q.pop();
	}
	printf("\n");

	return 0;
}
