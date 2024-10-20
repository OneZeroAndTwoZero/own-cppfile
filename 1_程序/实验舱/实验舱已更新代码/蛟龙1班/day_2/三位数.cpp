#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	int h = a + b + c;
	cout << h << endl;
	bool flag = h >= 1000 || h < 100;
	cout << flag << endl;
	
	return 0;
}
