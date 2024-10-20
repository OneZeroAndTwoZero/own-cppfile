#include<bits/stdc++.h>
using namespace std;

int main(){
	double a,b,c;
	cin >> a >> b >> c;
	if(a + b <= c || a + c <= b || b + c <= a){
		printf("%.2lf %.2lf %.2lf\n",a,b,c);
		return 0;
	}
	double p = (a + b + c) / 2.0;
	double s = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("%.2lf",s);

	return 0;
}

