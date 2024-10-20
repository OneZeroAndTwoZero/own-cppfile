#include<bits/stdc++.h>
using namespace std;

double qu(double x,int n){
	if(n == 1) return sqrt(1 + x);
	return sqrt( n + qu(x,n - 1));
}

int main(){
	double x;
	int n;
	cin >> x >> n;
	printf("%.2lf",qu(x,n));

	return 0;
}

