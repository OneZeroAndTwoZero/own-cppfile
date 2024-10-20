#include<bits/stdc++.h>
using namespace std;

double suan(double x){
	if(x == 0){
		return 0;
	}else{
		return 1 / x;
	}
}

int main(){
	double x;
	cin >> x;
	printf("f(%.1lf) = %.1lf",x,suan(x));

	return 0;
}

