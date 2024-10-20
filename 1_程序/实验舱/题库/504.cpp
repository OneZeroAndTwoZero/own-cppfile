#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	int m = 2 * a - 3 * b + a * b - 6;
	if(m == 0){
		cout << "Data error" << endl;
		return 0;
	}
	int z = 3 * (2 * a - 3 * b) - a * (-5 + 3 * b) + b * (-4 * a - 5);
	double zhi = (double)z / (double)m;
	printf("%.2lf",zhi);

	return 0;
}

