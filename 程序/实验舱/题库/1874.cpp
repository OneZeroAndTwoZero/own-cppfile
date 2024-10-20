#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a,b,c;
	cin >> a >> b >> c;
	long long h = a / c,s = b / c;
	long long ans = h * s;
	cout << ans << endl;

	return 0;
}

