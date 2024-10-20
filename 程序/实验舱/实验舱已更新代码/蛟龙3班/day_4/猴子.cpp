#include<bits/stdc++.h>
using namespace std;

int sum(int k,int n){
	if(k == 7) return n;
	return (sum(k + 1,n) + 2) * 2;
}

int main(){
	int n;
	cin >> n;
	cout << sum(1,n) << endl;

	return 0;
}

