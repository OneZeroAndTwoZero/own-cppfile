#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d,sum = 0;
	cin >> a >> b >> c >> d;
	if(a == 1) sum += 461;
	else if(a == 2) sum += 431;
	else if(a == 3) sum += 420;
	if(b == 1) sum += 100;
	else if(b == 2) sum += 57;
	else if(b == 3) sum += 70;
	if(c == 1) sum += 130;
	else if(c == 2) sum += 160;
	else if(c == 3) sum += 118;
	if(d == 1) sum += 167;
	else if(d == 2) sum += 266;
	else if(d == 3) sum += 75;
	cout << sum << endl;
	
	return 0;
}

