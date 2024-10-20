#include<bits/stdc++.h>
using namespace std;

int main(){
	int y;
	cin >> y;
	int money = 2500;
	if(y < 100000) money += 0.02 * y;
	else if(y < 200000) money += 0.03 * y;
	else money += 0.05 * y;
	cout << money << endl;

	return 0;
}

