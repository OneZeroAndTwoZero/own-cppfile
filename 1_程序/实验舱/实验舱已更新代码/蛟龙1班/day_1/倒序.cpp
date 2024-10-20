#include<bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin >> a;
	int b = 0,c = 0;
	b = a % 10;
	c = a / 10 % 10;
	int sum = 10*b + c;
	cout << sum << endl;
	
	return 0;
}
