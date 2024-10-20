#include<bits/stdc++.h>
using namespace std;

double a, b, l;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif

	scanf("%lf %lf", &a, &b);
	l = (a * a) / (a + b);
	printf("%.1lf\n", (a + b) * l / 2);

	return 0;
}
