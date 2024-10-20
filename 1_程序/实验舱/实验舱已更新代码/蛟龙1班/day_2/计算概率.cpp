#include<bits/stdc++.h>
using namespace std;
#define pi 3.14

int main(){
	double a,b,d,s_1,s_2,gai_lv;
	scanf("%lf,%lf,%lf",&a,&b,&d);
	s_1 = a*b;
	double r = d/2.0;
	s_2 = pi*r*r;
	gai_lv = s_2/s_1;
	gai_lv = gai_lv*100;
	printf("%.2lf%%\n",gai_lv);
		
	return 0;
}
