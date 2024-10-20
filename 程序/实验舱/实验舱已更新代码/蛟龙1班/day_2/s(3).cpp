#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159

int main(){
	int a,n;
	cin >> a >> n;
	int num = n*n;
	double s_z = a*a;
	double r = a/2;
	double s_y = pi*r*r;
	double s_c = s_z - s_y;
	double s_f = s_c * num;
	printf("%.2lf",s_f);
	
	return 0;
}
