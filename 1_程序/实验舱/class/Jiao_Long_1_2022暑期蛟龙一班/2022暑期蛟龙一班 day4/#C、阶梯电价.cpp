#include<bits/stdc++.h>
using namespace std;

double d1,d2,p,t,p2,p3,q;

int main(){
	scanf("%lf %lf %lf %lf",&d1,&d2,&p,&t);
	p2 = 1.1 * p;
	p3 = 1.5 * p2;
	if(t <= d1){
		q = p * t;
	}else if(t <= d2){
		q = d1 * p + (t - d1) * p2;
	}else{
		q = d1 * p + (d2 - d1) * p2 + (t - d2) * p3;
	}
	printf("%.2lf",q);
	
	return 0;
}
