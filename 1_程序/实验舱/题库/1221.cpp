#include<bits/stdc++.h>
using namespace std;

int main(){
	int z = 1,m = 1,fx = 1;
	int n;
	cin >> n;
	double sum = 0;
	for(int i = 1;i <= n;i++){
		double now = (double)z / m;
		sum += fx * now;
		m += 2,fx *= -1;
	}
	double ans = 4 * sum;
	printf("%.10lf",ans);

	return 0;
}

