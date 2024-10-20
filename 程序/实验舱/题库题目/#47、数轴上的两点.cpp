#include<bits/stdc++.h>
using namespace std;

int d;
double a,b;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif
	
	scanf("%d",&d);
	a = (double)d / 2.0;
	b = (double)d / -2.0;
	printf("%.1lf %.1lf\n",a,b);
	
	return 0;
}
