#include<bits/stdc++.h>
using namespace std;

double x;
int n;
	
double qu(double x,int n){
	if(n == 1) return sqrt(1 + x);
	return sqrt(n + qu(x,n - 1));
}

int main(){
	cin >> x >> n;
	printf("%.2lf",qu(x,n));

	return 0;
}

