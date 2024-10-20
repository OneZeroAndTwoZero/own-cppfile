#include<bits/stdc++.h>
using namespace std;

int main(){
	double a,b,r;
	cin >> a >> b;
	int k = floor(a / b);
	r = a - b * k;
	printf("%.2lf",r);

	return 0;
}

