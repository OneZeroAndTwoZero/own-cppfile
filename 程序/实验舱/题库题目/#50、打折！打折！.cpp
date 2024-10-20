#include<bits/stdc++.h>
using namespace std;

double mo_1,zhe,mo_2;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif
	
	scanf("%lf %lf",&zhe,&mo_1);
	mo_2 = mo_1 / (zhe / 10);
	printf("%.2lf\n",mo_2);
	
	return 0;
}
