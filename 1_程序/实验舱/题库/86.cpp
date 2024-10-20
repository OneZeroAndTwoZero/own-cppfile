#include<bits/stdc++.h>
using namespace std;

long long a;

bool o(){
	for(int i = 2;i <= sqrt(a);i++){
		if(!a % i) return 0;
	}
	return 1;
}

int main(){
	cin >> a;
	if(o()){
		cout << "TRUE" << endl;
	}else{
		cout << "FALSE" << endl;
	}

	return 0;
}

