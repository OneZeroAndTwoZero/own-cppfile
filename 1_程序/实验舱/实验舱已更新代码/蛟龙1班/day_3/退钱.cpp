#include<bits/stdc++.h>
using namespace std;

int main(){
	double a,b;
	cin >> a;
	b = a*0.05;
	b = b >= 5 ? b : 5;
	a = a - b;
	printf("%.2lf",a);
		
	return 0;
} 
