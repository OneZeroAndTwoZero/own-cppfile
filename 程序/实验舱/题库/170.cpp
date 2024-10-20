#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int z,t = 0;
	for(int i = 0;i < n;i++){
		cin >> z;
		t += ceil((double)z / 70.0);
	}
	double q = 0.1 * t;
	printf("%.1lf",q);

	return 0;
}

