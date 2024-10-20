#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a;
    cin >> a;
    bool y = 0;
    for(long long i = 2;i <= sqrt(a);i++){
    	if(a % i == 0){
    		y = 1;
		}
	}
	if(a == 0){
		y = 1;
	}
	if(a == 1){
		y = 1;
	}
	if(y == 0){
		cout << "TRUE" << endl;
	}else{
		cout << "FALSE" << endl;
	}
	
	return 0;
}
