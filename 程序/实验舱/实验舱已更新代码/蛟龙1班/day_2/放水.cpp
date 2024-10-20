#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d,e;
	cin >> a >> b >> c >> d >> e;
	int cfx_3 = a*b*c;
	int out = d-e;
	double time = (double)cfx_3 / out;
	printf("%.2lf",time);
	
	return 0;
}
