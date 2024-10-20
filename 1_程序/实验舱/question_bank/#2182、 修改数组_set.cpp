#include<bits/stdc++.h>
using namespace std;

int N;
int A[1200006];
set<int> st;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &N);
	for (int i = 1; i <= 1200000; i ++){
		st.insert(i);
	}
	for (int i = 0; i < N; i ++){
		scanf("%d", &A[i]);
		A[i] = *st.lower_bound(A[i]);
		st.erase(A[i]);
		printf("%d%c", A[i], " \n"[i == N - 1]);
	}

	return 0;
}
