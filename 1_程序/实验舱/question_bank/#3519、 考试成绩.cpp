#include<bits/stdc++.h>
using namespace std;

int X, Y, Z;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif

	scanf("%d %d %d", &X, &Y, &Z);
	printf("%d\n", X | Y | Z);

	return 0;
}
