#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159

int main(){
	double a,b,c;
	cin >> a >> b >> c;
	double s_t = (a+b)*c*0.5;
	double r = c/2;
	double s_y = pi*r*r;
	double s = s_t - s_y;
	printf("%.2lf",s);
	
	return 0;
}
