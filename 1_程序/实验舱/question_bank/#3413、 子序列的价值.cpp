#include<bits/stdc++.h>
using namespace std;

int T, N;
int A[500005];
vector<int> vec;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &T);
	while (T --){
		scanf("%d", &N);
		for (int i = 0; i < N; i ++){
			scanf("%d", &A[i]);
		}
		vec.clear();
		for (int i = 0; i < N; i ++){
			if (vec.size() >= 2 && abs(A[i] - vec[vec.size() - 2]) == 
			abs(A[i] - vec[vec.size() - 1]) + abs(vec[vec.size() - 1] - vec[vec.size() - 2]))
				vec.pop_back();
			vec.push_back(A[i]);
		}
		if (vec.size() == 2 && vec[0] == vec.back()) vec.pop_back();
		printf("%d\n", vec.size());
	}

	return 0;
}
