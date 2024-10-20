#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,c;
	cin >> n >> c;
	bool lx = 0;
	while(c--){
		if(lx){
			n = n * 2;
		}
		lx = !(lx);
	}
	cout << lx << " " << n;

	return 0;
}

