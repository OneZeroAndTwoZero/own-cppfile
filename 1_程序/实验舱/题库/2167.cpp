#include<bits/stdc++.h>
using namespace std;

int main(){
	int cm;
	cin >> cm;
	int inch = cm / 100.0/ 0.3048 * (12.0 / 145.0);
	int foot = inch / 12;
	inch %= 12;
	cout << foot << " " << inch << endl;

	return 0;
}

