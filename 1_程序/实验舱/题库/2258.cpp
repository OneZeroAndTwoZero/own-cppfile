#include<bits/stdc++.h>
using namespace std;

int a[10005] = {0},m[10005] = {0};

double mj(int i){
	return (a[i] + a[i + 1]) * m[i] / 2.0;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i <= n;i++){
		cin >> a[i];
	}
	for(int i = 0;i < n;i++){
		cin >> m[i];
	}
	double ans = 0;
	for(int i = 0;i < n;i++){
		ans += mj(i);
	}
	printf("%.1lf\n",ans);

	return 0;
}

