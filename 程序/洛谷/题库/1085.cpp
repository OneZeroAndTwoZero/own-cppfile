#include<bits/stdc++.h>
using namespace std;

int main(){
	int zd = -1,zd_n;
	for(int i = 0;i < 7;i++){
		int t1,t2;
		cin >> t1 >> t2;
		if((t1 + t2) > zd){
			zd = t1 + t2;
			zd_n = i + 1;
		}
	}
	if(zd <= 8){
		cout << 0 << endl;
	}else{
		cout << zd_n << endl;
	}

	return 0;
}

