#include<bits/stdc++.h>
using namespace std;

long double x1,y1,r1,x2,y2,r2,x3,y3,r3;

int main(){
//#ifndef ONLINE_JUDGE
//    freopen("data.in","r",stdin);
//    freopen("data.out","w",stdout);
//#endif

	cin >> x1 >> y1 >> r1;
	cin >> x2 >> y2 >> r2;
	cin >> x3 >> y3 >> r3;
	
	long double k1,k2,k3,b1,b2,b3;
	b1 = (r1 * r1 - y1 * y1 - x1 * x1 - r2 * r2 + y2 * y2 + x2 * x2) / (2 * x2 - 2 * x1);
	b2 = (r1 * r1 - y1 * y1 - x1 * x1 - r3 * r3 + x3 * x3 + y3 * y3) / (2 * x3 - 2 * x1);
	b3 = (r2 * r2 - y2 * y2 - x2 * x2 - r3 * r3 + x3 * x3 + y3 * y3) / (2 * x3 - 2 * x2);
	k1 = 2 * (y1 - y2) / (2 * x2 - 2 * x1);
	k2 = 2 * (y1 - y3) / (2 * x3 - 2 * x1);
	k3 = 2 * (y2 - y3) / (2 * x3 - 2 * x2);
	
	cout << k1 << " " << b1 << endl;
	cout << k2 << " " << b3 << endl;
	cout << k2 << " " << b3 << endl;

	return 0;
}

