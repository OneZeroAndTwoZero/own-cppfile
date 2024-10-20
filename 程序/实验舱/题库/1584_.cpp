#include<bits/stdc++.h>
using namespace std;

int main(){
	double r,m,y;
	cin >> r >> m >> y;
	for(int i = 0;i < y;i++){
		m *= 1 + r / 100.0;
	}
	cout << (long long)m << endl;

	return 0;
}

