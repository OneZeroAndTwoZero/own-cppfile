#include<bits/stdc++.h>
using namespace std;

int n;
double avg,t,ans = 0;

int main(){
	scanf("%d %lf",&n,&avg);
	for(int i = 0;i < n;i++){
		scanf("%lf",&t);
		ans += (t - avg) * (t - avg);
	}
	ans = sqrt(ans / n);
	printf("%.0lf\n",ans);

	return 0;
}

