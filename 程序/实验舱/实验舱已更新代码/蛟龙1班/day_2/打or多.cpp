#include<bits/stdc++.h>
using namespace std;

int main(){
	double a,b,c;
	cin >> a >> b >> c;
	double z = a/100 + 1;
	double d = b/10;
	double real = c*z*d;
	double cha = real - c;
	printf("%.2lf",cha);
	
	return 0;
}
