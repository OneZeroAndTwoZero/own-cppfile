#include<bits/stdc++.h>
using namespace std;

int n;
double a[1005] = {0},sum,max_ = 0;

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%lf",&a[i]);
		sum += a[i];
	}
	sum = sum / n;
	printf("%.2lf ",sum);
	for(int i = 0;i < n;i++){
		max_ = max(max_,fabs(sum - a[i]));
	}
	printf("%.2lf\n",max_);

	return 0;
}

