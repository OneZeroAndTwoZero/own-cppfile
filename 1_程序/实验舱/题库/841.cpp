#include<bits/stdc++.h>
using namespace std;

int main(){
	long long x1,x2,y1,y2;
	cin >> x1 >> y1 >> x2 >> y2;
	long long d1 = abs(x1 - x2),d2 = abs(y1 - y2);
	long long area = d1 * d2;
	cout << area << endl;

	return 0;
}

