#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	double sum = 0;
	int n1,n2;
	int q1,q2;
	cin >> q1 >> q2;
	for(int i = 1;i < n;i++){
		cin >> n1 >> n2;
		double d = sqrt(abs(n1 - q1) * abs(n1 - q1) + abs(n2 - q2) * abs(n2 - q2));
		sum += d;
		q1 = n1,q2 = n2;
	}
	double t = sum / 50.0 * k;
	printf("%.0lf",t);

	return 0;
}

