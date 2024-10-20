#include<bits/stdc++.h>
using namespace std;

bool ok(long long a){
	bool r = 1;
	if(a < 2){
		r = !r;
	}
	for(long long i = 2;i <= sqrt(a) && r;i++){
		if(a % i == 0){
			r = !r;
		}
	}
	if(r) return 1;
	return 0;
}

int main(){
	long long a;
	cin >> a;
	if(ok(a)){
		cout << "TRUE" << endl;
	}else{
		cout << "FALSE" << endl;
	}
	
	return 0;
}
