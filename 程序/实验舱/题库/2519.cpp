#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k,z;
	cin >> n >> k;
	double hou = 120.0;
	int y = 1;
	z = n;
	while(z < hou){
		if(y > 30){
			cout << "Impossible" << endl;
			return 0;
		}
		hou = hou * (1 + (double)k / 100);
		z += n;
		y ++;
	}
	cout << y << endl;

	return 0;
}

