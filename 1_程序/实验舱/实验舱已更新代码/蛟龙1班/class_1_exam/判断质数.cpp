#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a;
	cin >> a;
	bool pd = 1;
	if(a < 2){
		cout << "FALSE" << endl;
		return 0;
	}
	for(long long i = 2;i <= sqrt(a);i++){
		if(a % i == 0){
			pd = 0;
		}
	}
	if(pd){
		cout << "TRUE" << endl;
	}else{
		cout << "FALSE" << endl;
	}
	
	return 0;
}
