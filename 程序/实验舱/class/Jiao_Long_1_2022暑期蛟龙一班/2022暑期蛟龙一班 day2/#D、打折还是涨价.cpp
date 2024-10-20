#include<bits/stdc++.h>
using namespace std;

double a,b,c,d,z,real_,cha;

int main(){
	scanf("%lf %lf %lf",&a,&b,&c);
	z = a / 100 + 1,d = b / 10;
	real_ = c * z * d;
	cha = real_ - c;
	printf("%.2lf\n",cha);
	
	return 0;
}
