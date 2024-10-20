#include<bits/stdc++.h>
using namespace std;

#define pi 3.14159
int a,n,num;
double s_z,r,s_y,s_c,s_f;

int main(){
	scanf("%d %d",&a,&n);
	num = n * n;
	s_z = a * a,r = a / 2,s_y = pi * r * r;
	s_c = s_z - s_y;
	s_f = s_c * num;
	printf("%.2lf",s_f);
	
	return 0;
}
