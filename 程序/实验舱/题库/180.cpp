#include<bits/stdc++.h>
using namespace std;

int main(){
	double money = 0;
	double kg;
	cin >> kg;
	if(kg <= 10){
		money = 2.5;
	}else{
		double duo = ceil(kg - 10);
		money = 2.5 + 1.5 * duo;
	}
	printf("%.1lf",money);

	return 0;
}

