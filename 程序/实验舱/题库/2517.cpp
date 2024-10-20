#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int deg = 0;
	int si = 0,sj = 0;
	for(int i = 0;i < n;i++){
		int op,de,le;
		cin >> op >> de >> le;
		if(op){
			deg -= de;
			if(deg < 0) deg += 360;
		}else{
			deg += de;
			deg = deg % 360;
		}
		if(deg == 0) si += le;
		if(deg == 90) sj += le;
		if(deg == 180) si -= le;
		if(deg == 270) sj -= le;
	}
	cout << sj << " " << si << endl;

	return 0;
}

