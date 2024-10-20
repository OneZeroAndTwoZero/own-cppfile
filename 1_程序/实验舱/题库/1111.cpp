#include<bits/stdc++.h>
using namespace std;

int main(){
	double x1,x2,y1,y2;
	cin >> x1 >> y1 >> x2 >> y2;
	double z = min(x1,x2),y = max(x1,x2),s = max(y1,y2),x = min(y1,y2);
	cin >> x1 >> y1 >> x2 >> y2;
	double z2 = min(x1,x2),y2_ = max(x1,x2),s2 = max(y1,y2),x2_ = min(y1,y2);
	s = min(s,s2);
	x = max(x,x2_);
    z = max(z,z2);
	y = min(y,y2_);
    double d1 = max(s - x,0.0),d2 = max(y - z,0.0);
	printf("%.2lf\n",(double)(d1 * d2));

	return 0;
}

