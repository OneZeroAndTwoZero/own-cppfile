#include<bits/stdc++.h>
using namespace std;

bool su(int a){
	if(a == 2) return 1;
	if(a < 2 || a % 2 == 0) return 0;
	for(int i = 2;i * i <= a;i++){
		if(a % i == 0) return 0;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t --){
		int n;
		cin >> n;
		bool p = 0;
		for(int i = 2;i * i <= n;i++){
			if(n % i == 0){
				if(su(i)){
					if(su(n / i)){
						cout << "Yes"<< endl;
						p = 1;
						break;
					}
				}
			}
		}
		if(!p){
			cout << "No" << endl;
		}
	}

	return 0;
}

