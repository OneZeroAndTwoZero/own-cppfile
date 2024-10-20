#include<bits/stdc++.h>
using namespace std;

int N, T;
long long t;
unordered_map<int, int> cnt1, cnt2, cnt3, cnt4;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif

	scanf("%d %d", &N, &T);
	for (int i = 1; i <= T; i ++){
		scanf("%lld", &t);
		-- t;
		int x = t / N, y = t % N;
		cnt1[x] ++, cnt2[y] ++, cnt3[x - y] ++, cnt4[x + y] ++;
		if (cnt1[x] == N || cnt2[y] == N || cnt3[x - y] == N || cnt4[x + y] == N){
			printf("%d\n", i);
			return 0;
		}
	}
	printf("-1\n");

	return 0;
}
