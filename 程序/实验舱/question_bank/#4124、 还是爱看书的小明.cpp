#include<bits/stdc++.h>
using namespace std;

int N, M, pos = 1, cur = 0;
int a[100005];
int ans = 0;
vector<int> idx[100005];

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d %d", &N, &M);
	for (int i = 1; i <= N; i ++){
		scanf("%d", &a[i]);
	}
	while (pos <= N){
		cur = 0, ++ ans;
		while (cur < M && pos <= N){
			idx[ans].push_back(pos);
			cur += a[pos];
			++ pos;
		}
	}
	for (int i = 1; i <= ans; i ++){
		printf("Day%d:", i);
		for (int j = 0; j < idx[i].size(); j ++){
			printf("%d%c", idx[i][j], ",."[j == idx[i].size() - 1]);
		}
		printf("\n");
	}

	return 0;
}
