#include<bits/stdc++.h>
using namespace std;

double n, m, tmp;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif

	scanf("%lf %lf", &n, &m);
	tmp = sqrt(n * n + m * m);
	printf("%.5lf %.5lf\n", n / tmp, m / tmp);

	return 0;
}
