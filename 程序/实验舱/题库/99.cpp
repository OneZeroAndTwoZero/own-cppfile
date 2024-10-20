#include<bits/stdc++.h>
using namespace std;

int main(){
	double r_n = 13,r_m = 20;
	int year = 0;
	double r;
	cin >> r;
	while(r_n < r_m){
		r_n = r_n * (1 + r / 100.0);
		year ++;
	}
	cout << year << endl;
	
	return 0;
}
