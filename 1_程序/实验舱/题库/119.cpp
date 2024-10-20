#include<bits/stdc++.h>
using namespace std;

bool su(int a){
	if(a < 2 || a % 2 == 0 && a != 2){
		return 0;
	}
	for(int i = 2;i * i <= a;i++){
		if(a % i == 0) return 0;
	}
	return 1;
}

int su_num = 0;

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int tem;
		cin >> tem;
		if(su(tem)){
			su_num ++;
		}
	}
	double lu = (double)su_num / n;
	printf("%.2lf\%\n",lu * 100);

	return 0;
}


