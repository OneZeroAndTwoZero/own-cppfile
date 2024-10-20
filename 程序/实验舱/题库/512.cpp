#include<bits/stdc++.h>
using namespace std;

int main(){
	double h;
	cin >> h;
	double sum = 0,high = h;
	for(int i = 1;i <= 10;i++){
		high = high / 2;
		if(i != 10){
		    sum += high * 3;
		}else{
			sum += high * 2;
		}
	}
	cout << sum << endl << high << endl;

	return 0;
}

