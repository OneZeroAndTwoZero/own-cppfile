#include<bits/stdc++.h>
using namespace std;

double p = 3.141592653589793,l = 0.00001,r = 0,ans;
int n;
long long f;
double v[300005] = {0};

bool check(double x){
	long long gs = 0;
	for(int i = 0;i < n;i++){
		gs += floor(v[i] / x);
	}
	return gs >= f;
}

int main(){
	scanf("%d %lld",&n,&f);
	f ++;
	for(int i = 0;i < n;i++){
		scanf("%lf",&v[i]);
		v[i] = p * v[i] * v[i] * 1.0;
		r = max(v[i],r);
	}
	for(int i = 0;i < 1000;i++){
		double mid = (l + r) / 2.0;
		if(check(mid)){
			ans = mid;
			l = mid;
		}else{
			r = mid;
		}
	}
	printf("%.5lf\n",ans);

	return 0;
}

