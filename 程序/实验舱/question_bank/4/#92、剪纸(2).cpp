#include<bits/stdc++.h>
using namespace std;

int n;
double ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%lf %d",&ans,&n);
	for(int i = 1;i <= n;i++){
		ans /= 2;
	}
	printf("%.10lf",ans);
	
	return 0;
}