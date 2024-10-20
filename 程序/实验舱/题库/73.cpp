#include<bits/stdc++.h>
using namespace std;

int main(){
	int all,cha;
	cin >> all >> cha;
	int n = all;
	n += cha * 2;
	int san = n / 5;
	int er = san - cha;
	cout << san << " " << er << endl;
	
	return 0;
}
