#include<bits/stdc++.h>
using namespace std;

long long cz_area(long long x1,long long y1,long long x2,long long y2,long long x3,long long y3,long long x4,long long y4){
	if(x3 < x1) x3 = x1;
	if(y3 < y1) y3 = y1;
	if(x4 > x2) x4 = x2;
	if(y4 > y2) y4 = y2;
	if(x3 > x4 || y3 > y4) return abs(x1 - x2) * abs(y1 - y2);
	return abs(x1 - x2) * abs(y1 - y2) - abs(x3 - x4) * abs(y3 - y4);
}

int main(){
	long long x1,x2,x3,x4,x5,x6,y1,y2,y3,y4,y5,y6;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >>y5 >> x6 >> y6;
	long long ans = cz_area(x1,y1,x2,y2,x5,y5,x6,y6) + cz_area(x3,y3,x4,y4,x5,y5,x6,y6);
	cout << ans << endl;

	return 0;
}

