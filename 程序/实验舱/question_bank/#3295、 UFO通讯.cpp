#include<bits/stdc++.h>
using namespace std;

int N;
double D, H, x, y, ans = 0.0;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d %lf %lf", &N, &D, &H);
	while (N --){
		scanf("%lf %lf", &x, &y);
		if ((x >= 0) ^ (D >= 0)) continue;
		double k = (H - y) / (D - x);
		ans = max(ans, H - D * k);
	}
	printf("%.5lf\n", ans);
	
	return 0;
}
