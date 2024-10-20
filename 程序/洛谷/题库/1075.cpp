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
	int n;
	cin >> n;
	for(int i = 2;i * i < n;i++){
		if(su(i) && n % i == 0){
			cout << n / i << endl;
			return 0;
		}
	}

	return 0;
}

