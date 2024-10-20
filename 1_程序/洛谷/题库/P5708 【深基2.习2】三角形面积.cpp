#include<bits/stdc++.h>
using namespace std;

double a,b,c,p;

int main(){
	scanf("%lf %lf %lf",&a,&b,&c);
	p = (a + b + c) / 2.0;
	printf("%.1lf\n",sqrt(p * (p - a) * (p - b) * (p - c)));

	return 0;
}

