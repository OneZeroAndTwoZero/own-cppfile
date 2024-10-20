#include<bits/stdc++.h>
#define lowbit(x) ((x) & (-x))
using namespace std;

int N, M;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i ++){
		if (i & 1){
			if (i % 4 == 3) printf("#");
			else printf(".");
			for (int j = 1; j < M - 1; j ++){
				printf(".");
			}
			if (i % 4 == 3) printf(".");
			else printf("#");
		}else{
			for (int j = 0; j < M; j ++){
				printf("#");
			}
		}
		printf("\n");
	}

	return 0;
}
