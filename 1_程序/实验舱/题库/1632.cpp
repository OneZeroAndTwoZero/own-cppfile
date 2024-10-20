#include<bits/stdc++.h>
using namespace std;

long long suan(int a){
	long long ans = 1;
	for(int i = 1;i <= a;i++){
		ans *= i;
	}
	return ans;
}

int main(){
	double ans = 1;
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		ans += 1 / (double)suan(i + 1);
	}
	printf("%.10lf\n",ans);

	return 0;
}

