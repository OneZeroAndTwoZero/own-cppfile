#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n / 10 != 0){
		int tem = n;
		int sum = 0;
		while(tem){
			sum += tem % 10;
			tem /= 10;
		}
		n = sum;
	}
	cout << n << endl;

	return 0;
}

