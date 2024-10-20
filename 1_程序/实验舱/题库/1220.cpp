#include<bits/stdc++.h>
using namespace std;

int main(){
	int z = 1,m = 3;
	double sum = 0;
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++){
		double n = (double)z / m;
		sum += n;
		z += 2,m += 2;
	}
	printf("%.2lf",sum);

	return 0;
}

