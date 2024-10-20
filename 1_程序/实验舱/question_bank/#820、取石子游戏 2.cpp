#include<bits/stdc++.h>
using namespace std;

int N;
int ans, t;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in", "r", stdin);
    freopen("../data.out", "w", stdout);
#endif

	scanf("%d", &N);
	for (int i = 0; i < N; i ++){
		scanf("%d", &t);
		ans ^= t;
	}
	if (ans == 0) printf("lose\n");
	else printf("win\n");

    return 0;
}
