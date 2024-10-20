#include<bits/stdc++.h>
using namespace std;

int main(){
	double x;
	int n;
	cin >> x >> n;
	for(int i = 1;i <= n;i++){
		x = (1 + 0.001) * x;
	}
	printf("%.8lf",x);

	return 0;
}

