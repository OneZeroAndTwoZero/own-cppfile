#include<bits/stdc++.h>
using namespace std;

double a,b,c,x;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%lf %lf %lf",&a,&b,&c);
	if(a == 0){
		printf("no\n");
        return 0;
	}
    x = (c - b) / a;
    printf("%.2lf\n",x);
	
	return 0;
}