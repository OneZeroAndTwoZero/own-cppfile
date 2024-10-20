#include<bits/stdc++.h>
using namespace std;

bool sushu(int a){
	if(a < 2 || (a % 2 == 0 && a != 2)){
		return 0;
	}
	bool ok = 1;
	int n = sqrt(a);
	for(int i = 2;i <= n;i++){
		if(a % i == 0){
			ok = 0;
		}
	}
	return ok;
}

bool shu(int a){
	if(sushu(a) == 0){
		return 0;
	}
	while(a){
		int w = a % 10;
		if(sushu(w) == 0){
		    return 0;
	    }
		a /= 10;
	}
	return 1;
}

int main(){
	int n;
	cin >> n;
	int num[n];
	for(int i = 0;i < n;i++){
		cin >> num[i];
		if(shu(num[i])){
			cout << "yes" << endl;
		}else{
			cout << "no" << endl;
		}
	}
	
	return 0;
} 
