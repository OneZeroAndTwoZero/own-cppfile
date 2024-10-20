#include<bits/stdc++.h>
using namespace std;

int main(){
	double h;
	cin >> h;
	double sum = 0,high = h;
	int c = 0;
	while(1){
		c ++;
		high = high / 2;
		sum += high * 2;
		if(high <= 0.01){
			break;
		}else{
			sum += high;
		}
	}
	cout << sum << endl << c << endl;

	return 0;
}

