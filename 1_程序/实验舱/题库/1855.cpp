#include<bits/stdc++.h>
using namespace std;

int main(){
	double x1,x2,x3,y1,y2,y3;
	double ans = 0;
	cin >> x1 >>y1 >> x2 >> y2 >> x3 >> y3;
	double d1 = sqrt(pow((x1 - x2),2) + pow((y1 - y2),2));
	double d2 = sqrt(pow((x1 - x3),2) + pow((y1 - y3),2));
	double d3 = sqrt(pow((x3 - x2),2) + pow((y3 - y2),2));
	double p = (d1 + d2 + d3) / 2;
	ans = sqrt(p * (p - d1) * (p - d2) * (p - d3));
	printf("%.2lf\n",ans);

	return 0;
}

