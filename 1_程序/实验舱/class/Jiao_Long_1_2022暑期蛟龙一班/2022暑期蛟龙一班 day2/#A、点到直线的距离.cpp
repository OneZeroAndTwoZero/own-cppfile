#include<bits/stdc++.h>
using namespace std;

#define a 3
#define b -1
#define c -5
double x,y,zi,mu,ju;

int main(){
	scanf("%lf,%lf",&x,&y);
	mu = sqrt(pow(a,2)+pow(b,2));
	zi = a*x + b*y + c;
	ju = fabs(zi / mu);
	printf("%.3lf\n",ju); 
	
	return 0;
}
