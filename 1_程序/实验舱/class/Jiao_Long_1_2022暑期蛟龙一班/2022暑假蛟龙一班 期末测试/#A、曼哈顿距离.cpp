#include<bits/stdc++.h>
using namespace std;

int main(){
	double x1,y1,x2,y2;
	cin >> x1 >> y1 >> x2 >> y2;
	double d_man;
	d_man = fabs(x1 - x2) + fabs(y1 - y2);
	printf("%.3lf",d_man);
	
	return 0;
}
