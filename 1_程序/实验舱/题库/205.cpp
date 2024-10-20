#include<bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin >> a;
	int sum = 0;
	while(a){
		if((a % 10) % 2 == 0) sum += a % 10;
		a /= 10;
	}
	cout << sum << endl;

	return 0;
}

