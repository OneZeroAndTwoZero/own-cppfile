#include<bits/stdc++.h>
using namespace std;

int fh(int n){
	int ans = 1;
	while(n --){
		ans *= 2;
	}
	return ans;
}

int main(){
	int n;
	cin >> n;
	if(n % 2 == 1){
		cout << "-1" << endl;
		return 0;
	}
	while(n){
		for(int i = 1;;i++){
			if(pow(2,i) <= n && pow(2,i + 1) > n){
				cout << fh(i) << " ";
				n -= pow(2,i);
				break;
			}
		}
	}

	return 0;
}

