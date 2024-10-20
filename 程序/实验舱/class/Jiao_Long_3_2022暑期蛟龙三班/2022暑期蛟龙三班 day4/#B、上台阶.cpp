#include<bits/stdc++.h>
using namespace std;

int n;

int up(int k){
	if(k == 1) return 1;
	if(k == 2) return 2;
	return up(k - 1) + up(k - 2);
}

int main(){
	while(cin >> n){
		cout << up(n) << endl;
	}

	return 0;
}

