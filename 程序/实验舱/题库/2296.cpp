#include<bits/stdc++.h>
using namespace std;

int main(){
	int x,y;
	cin >> x >> y;
	int ans = 5000;
	ans -= (100 * (100 - x)) / 2;
	ans -= (100 * y) / 2;
	cout << ans << endl;

	return 0;
}

