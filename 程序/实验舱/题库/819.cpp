#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	if(n % (k + 1) == 0){
		cout << 2 << endl;
	}else{
		cout << 1 << endl;
	}

	return 0;
}

