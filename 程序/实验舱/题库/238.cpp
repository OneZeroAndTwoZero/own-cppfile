#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	long long a;
	cin >> t;
	for(int i = 0;i < t;i++){
		cin >> a;
		if(a == 0 || a % 2 == 1){
			cout << 0 << endl;
			continue;
		}
		while(a != 1){
			if(a / 2 != ceil((double)a / 2.0)){
				cout << 0 << endl;
				continue;
			}
			a /= 2;
		}
		cout << 1 << endl;
	}

	return 0;
}

