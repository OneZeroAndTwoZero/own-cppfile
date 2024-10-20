#include<bits/stdc++.h>
using namespace std;

int main(){
	double x,y,t;
	cin >> x >> y >> t;
	double cha = y - x;
	double f = x * t;
	double z = f / cha;
	double d = y * z;
	printf("%.1lf\n",d);

	return 0;
}

