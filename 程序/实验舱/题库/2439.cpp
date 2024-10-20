#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin >> n;
	long long tem = 1,he = 0;
	while(he < n){
		he += tem;
		tem ++;
	}
	cout << tem - 1 << endl;

	return 0;
}

