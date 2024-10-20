#include<bits/stdc++.h>
using namespace std;

int N, ans = -1;
long long A[100005][3], val[100005];
int op[3][3] = {{1, -1, -1}, {-1, 1, -1}, {-1, -1, 1}};

int solve(int x){
	int res = -1;
	long long cur = 0;
	for (int i = 0; i < N; i ++){
		val[i] = 0;
		for (int k = 0; k < 3; k ++){
			val[i] += A[i][k] * op[x][k];
		}
	}
	sort(val, val + N, greater<int>());
	for (int i = 0; i < N; i ++){
		cur += val[i];
		if (cur <= 0) break;
		res = i + 1;
	}
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &N);
	for (int k = 0; k < 3; k ++){
		for (int i = 0; i < N; i ++){
			scanf("%lld", &A[i][k]);
		}
	}
	for (int k = 0; k < 3; k ++){
		ans = max(ans, solve(k));
	}
	printf("%d\n", ans);
		
	return 0;
}
