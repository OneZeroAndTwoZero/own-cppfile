#include<bits/stdc++.h>
using namespace std;

bool ok(long long a){
	if(a < 1) return 0;
	if(a == 1) return 1;
	while(a > 0){
		if(a % 2 != 0 && a != 1){
			return 0;
		}
		a /= 2;
	}
	return 1;
}

int main(){
	int n;
	long long tem;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> tem;
		if(ok(tem)){
			cout << "1" << endl;
		}else{
			cout << "0" << endl;
		}
	}

	return 0;
}

