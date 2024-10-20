#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a,b;
	cin >> a >> b;
	if(a / b >= 1 && b % a == 0){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}

	return 0;
}

