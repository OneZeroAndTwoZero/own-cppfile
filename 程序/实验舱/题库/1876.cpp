#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	int sum = (a + b + c) / 2;
	int z = sum - b,l = sum - c,p = sum - a;
	cout << z << endl << l << endl << p << endl;

	return 0;
}

