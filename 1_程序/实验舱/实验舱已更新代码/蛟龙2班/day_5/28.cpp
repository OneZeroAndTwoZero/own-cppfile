#include<bits/stdc++.h>
using namespace std;

bool ok(int a){
	bool r = 1;
	if(a < 2){
		r = !r;
	}
	for(int i = 2;i <= sqrt(a) && r;i++){
		if(a % i == 0){
			r = !r;
		}
	}
	if(r) return 1;
	return 0;
}

int main(){
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++){
		if(i % 2 == 0 && i != 2){
			continue;
		}else{
			if(ok(i)){
				cout << i << " ";
			}
	    }
    }
	
	return 0;
}
