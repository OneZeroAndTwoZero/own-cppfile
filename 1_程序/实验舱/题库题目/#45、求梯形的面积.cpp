#include<bits/stdc++.h>
using namespace std;

int d_s,d_x,h;
double S;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	
	scanf("%d %d %d",&d_s,&d_x,&h);
	S = (d_s + d_x) / 2.0 * h;
	printf("%.2lf\n",S);
	
	return 0;
}
