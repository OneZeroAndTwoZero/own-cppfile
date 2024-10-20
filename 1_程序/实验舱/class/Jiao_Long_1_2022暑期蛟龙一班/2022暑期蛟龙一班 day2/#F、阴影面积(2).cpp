#include<bits/stdc++.h>
using namespace std;

#define pi 3.14159
double a,b,c,s_t,r,s_y,s;

int main(){
	scanf("%lf %lf %lf",&a,&b,&c);
	s_t = (a + b) * c * 0.5,r = c / 2,s_y = pi * r * r;
	s = s_t - s_y;
	printf("%.2lf",s);
	
	return 0;
}
