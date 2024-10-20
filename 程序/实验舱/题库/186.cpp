#include<bits/stdc++.h>
using namespace std;

bool su(int a){
	if(a < 2 || a % 2 == 0 && a != 2){
		return 0;
	}
	int n = sqrt(a);
	for(int i = 2;i <= n;i++){
		if(a % i == 0) return 0;
	}
	return 1;
}

int main(){
	int sum = 0;
	for(int i = 1;i <= 100;i++){
		if(su(i)){
			sum ++;
			if(sum % 5 == 0){
				cout << i << endl;
			}else{
			    cout << i << " ";
			}
		}
	}

	return 0;
}

