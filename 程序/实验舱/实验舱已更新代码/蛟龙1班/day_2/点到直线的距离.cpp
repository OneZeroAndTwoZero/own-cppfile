#include<bits/stdc++.h>
using namespace std;
#define a 3
#define b -1
#define c -5

int main(){
	double x,y;
	scanf("%lf,%lf",&x,&y);
	double zi,mu;
	mu = sqrt(pow(a,2)+pow(b,2));
	zi = a*x + b*y + c;
	double ju = fabs(zi / mu);
	printf("%.3lf",ju); 
	
	return 0;
}
