#include<bits/stdc++.h>
using namespace std;

double now = 13,m = 20,r;
int ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%lf",&r);
	while(now < m){
		now += now / 100.0 * r;
		++ ans;
	}
	printf("%d\n",ans);
	
	return 0;
}