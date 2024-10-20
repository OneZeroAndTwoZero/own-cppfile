#include<bits/stdc++.h>
using namespace std;

int main(){
	double w,h;
	cin >> w >> h;
	double bmi;
	bmi = w / pow(h,2);
	char lei;
	if(bmi < 18.5){
		lei = 'L';
	}else if(bmi <= 24){
		lei = 'N';
	}else{
		lei = 'H';
	}
	printf("%.1lf %",bmi);
	cout << lei << endl;
	
	return 0;
}
