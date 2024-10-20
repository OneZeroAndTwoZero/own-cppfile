#include<bits/stdc++.h>
using namespace std;

double a, b, c, der;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif

	scanf("%lf %lf %lf", &a, &b, &c);
	der = b * b - 4 * a * c;
	if (der < 0){
		printf("No Answer\n");
	}else if (der == 0){
		printf("%.5lf\n", -b / (2 * a));
	}else{
		printf("%.5lf\n", min((-b - sqrt(der)) / (2 * a), (-b + sqrt(der)) / (2 * a)));
		printf("%.5lf\n", max((-b - sqrt(der)) / (2 * a), (-b + sqrt(der)) / (2 * a)));
	}

	return 0;
}
