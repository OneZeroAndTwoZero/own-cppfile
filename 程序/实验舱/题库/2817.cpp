#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t --){
		long long a;
		cin >> a;
		bool p = 0;
		for(long long i = 2;i <= a;i *= 2){
			if(a % i != 0){
				cout << "NO" << endl;
				p = 1;
				break;
			}
			if((double)sqrt(a / i) == ceil((double)sqrt(a / i))){
				cout << "YES" << endl;
				p = 1;
				break;
			}
		}
		if(!p){
			cout << "NO" << endl;
		}
	}

	return 0;
}

