#include<bits/stdc++.h>
using namespace std;

int n;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif

	scanf("%d", &n);
	printf("%d\n", 180 * (n - 2));

	return 0;
}
