#include<bits/stdc++.h>
using namespace std;

double n;
double l = -100000,r = 100000,ans;

int main(){
	scanf("%lf",&n);
	for(int i = 0;i < 1000;i++){
		double mid = (l + r) / 2.0;
		if(mid * mid * mid < n){
			ans = mid;
			l = mid;
		}else{
			r = mid;
		}
	}
	printf("%.6lf\n",ans);

	return 0;
}

