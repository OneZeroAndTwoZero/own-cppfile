#include<bits/stdc++.h>
using namespace std;

int main(){
	long long h,a,b,c;
	cin >> h;
	cin >> a >> b >> c;
	long long ans = h / (a + b + c) * 3;
	h %= (a + b + c);
	if(h > 0){
		h -= a;
		ans ++;
	}
	if(h > 0){
		h -= b;
		ans ++;
	}
	if(h > 0){
		ans ++;
	}
	cout << ans << endl;

	return 0;
}

