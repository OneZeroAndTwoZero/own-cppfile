#include<bits/stdc++.h>
using namespace std;

long long n;
double ans; 

int main(){
	scanf("%lld",&n);
	if(n & 1) ans = -1;
	else ans = 0;
	ans += (n + 1) * (2 * n + 1) / 6.0;
	printf("%.2lf\n",ans);

	return 0;
}

