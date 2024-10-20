#include<bits/stdc++.h>
using namespace std;

double suan(double x){
	if(x >= 0){
		return pow(x,0.5);
	}else{
		return pow((x + 1),2) + 2 * x + (1 / x);
	}
}

int main(){
	double x;
	cin >> x;
	printf("f(%.2lf) = %.2lf",x,suan(x));

	return 0;
}

