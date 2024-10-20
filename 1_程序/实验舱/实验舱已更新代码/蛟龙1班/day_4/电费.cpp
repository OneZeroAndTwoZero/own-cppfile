#include<bits/stdc++.h>
using namespace std;

int main(){
	double d1,d2,p,t;
	cin >> d1 >> d2 >> p >> t;
	double p2 = 1.1 * p;
	double p3 = 1.5 * p2;
	double q;
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
