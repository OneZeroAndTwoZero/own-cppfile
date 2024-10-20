#include<bits/stdc++.h>
using namespace std;

int main(){
	int p,n,r;
	cin >> p >> n >> r;
	int d = 0;
	int xz = n;
	while(n <= p){
		xz = xz * r;
		n += xz;
		d++;
	}
	cout << d << endl;

	return 0;
}

