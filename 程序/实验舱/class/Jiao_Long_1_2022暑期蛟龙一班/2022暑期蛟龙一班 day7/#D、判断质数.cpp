#include<bits/stdc++.h>
using namespace std;

long long a;
bool y = 0;

int main(){
    cin >> a;
    for(long long i = 2;i <= sqrt(a);i++){
    	if(a % i == 0){
    		y = 1;
		}
	}
	if(a < 2){
		y = 1;
	}
	if(y == 0){
		cout << "TRUE" << endl;
	}else{
		cout << "FALSE" << endl;
	}
	
	return 0;
}
