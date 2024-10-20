#include<bits/stdc++.h>
using namespace std;

double l = 0.00001,r = 10,ans,x,y;
int n;

bool check(double x_){
	double re = 0;
	for(int i = 0;i < n;i++){
		re += y / pow(x_ + 1,i + 1);
	}
	return re >= x;
}

int main(){
	scanf("%lf %lf %d",&x,&y,&n);
	for(int i = 0;i < 100;i++){
		double mid = (l + r) / 2.0;
		if(check(mid)){
			ans = mid;
			l = mid;
		}else{
			r = mid;
		}
	}
	printf("%.2lf\n",ans * 100);

	return 0;
}

