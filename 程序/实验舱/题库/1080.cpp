#include<bits/stdc++.h>
using namespace std;

int main(){
	int v;
	cin >> v;
	v = 2019 - v;
	int ans = 0;
	ans = v / 100;
	v %= 100;
	ans += v / 50;
	v %= 50;
	ans += v / 20;
	v %= 20;
	ans += v / 10;
	v %= 10;
	ans += v / 5;
	v %= 5;
	ans += v;
	cout <<ans << endl; 

	return 0;
}

