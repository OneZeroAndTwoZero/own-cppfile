#include<bits/stdc++.h>
using namespace std;

int main(){
	int d;
	cin >> d;
	if(d <= 11500 / 2){
		cout << 10 << endl;
	}else if(d <= 27500 / 2){
		cout << 9 << endl;
	}else if(d <= 43500 / 2){
		cout << 8 << endl;
	}else if(d <= 59500 / 2){
		cout << 7 << endl;
	}else if(d > 155500 / 2){
		cout << 0 << endl;
	}else{
		int sx = d - 59500 / 2;
		int cha = (155500 - 59500) / 2 / 6;
		double tem = (double)sx / cha;
		cout << 6 - floor(tem) << endl;
	}

	return 0;
}

