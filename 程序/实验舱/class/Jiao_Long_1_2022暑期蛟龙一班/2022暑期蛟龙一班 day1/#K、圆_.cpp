#include<bits/stdc++.h>
using namespace std;

double p = 3.14159;
double s,c;
double r;

int main(){
	scanf("%lf",&r);
	s = r * r * p;
	c = 2 * r * p;
	printf("%.2f %.2f\n",s,c);
	
	return 0;
}
