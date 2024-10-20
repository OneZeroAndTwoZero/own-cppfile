#include<bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin >> a;
	int b = 0,c = 0,d = 0;
	b = a % 10;
	c = a / 10 % 10;
	d = a / 100 % 10;
	int other = 100*b + 10*c + d;
	int sum = a + other;
	cout << sum << endl;
	
	return 0;
}
