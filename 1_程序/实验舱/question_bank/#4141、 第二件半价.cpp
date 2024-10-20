#include<bits/stdc++.h>
using namespace std;

double A, ans = 0;
int B;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	scanf("%lf %d", &A, &B);
	while (B --){
		ans += A;
		A /= 2;
	}
	printf("%.2lf\n", ans);

	return 0;
}
