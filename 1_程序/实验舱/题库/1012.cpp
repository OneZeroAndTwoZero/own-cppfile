#include<bits/stdc++.h>
using namespace std;

double xf[505] = {0};
double jd[505] = {0};

int main(){
	int n;
	cin >> n;
	double sum_z = 0,sum_m = 0;
	for(int i = 0;i < n;i++){
		cin >> xf[i] >> jd[i];
		sum_m += xf[i];
		sum_z += xf[i] * jd[i];
	}
	double ans = sum_z / sum_m;
	printf("%.2lf\n",ans);

	return 0;
}

