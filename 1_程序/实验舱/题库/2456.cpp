#include<bits/stdc++.h>
using namespace std;

long long x,y,a,b,c;
long long ans1 = 0,ans2 = 0,d,x_d,y_d;

int main(){
	cin >> x >> y >> a >> b >> c;
	d = min(x,y);
	x_d = x - d,y_d = y - d;
	ans1 = d * c * 2 + x_d * a + y_d * b;
	ans2 = x * a + y * b;
	if(ans1 < ans2) cout << ans1 << endl;
	else cout << ans2 << endl;

	return 0;
}

