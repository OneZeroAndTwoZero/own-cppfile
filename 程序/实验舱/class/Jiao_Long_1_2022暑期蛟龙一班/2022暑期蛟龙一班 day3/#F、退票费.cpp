#include<bits/stdc++.h>
using namespace std;

double a,b;

int main(){
    scanf("%lf",&a);
	b = a * 0.05;
	b = b >= 5 ? b : 5;
	a = a - b;
	printf("%.2lf",a);
		
	return 0;
} 
