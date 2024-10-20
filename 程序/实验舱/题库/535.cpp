#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	char l;
	cin >> n >> l;
	int money = 8;
	if(l == 'y') money += 5;
	if(n > 1000){
		money += ceil((n - 1000) / 500.0) * 4;
	}
	cout << money << endl;

	return 0;
}

