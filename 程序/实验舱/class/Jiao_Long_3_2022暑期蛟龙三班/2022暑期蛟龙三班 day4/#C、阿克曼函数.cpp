#include<bits/stdc++.h>
using namespace std;

int m,n;

int ACK(int m,int n){
	if(m == 0){
		return 1 + n;
	}
	if(n == 0){
		return ACK(m - 1,1);
	}
	return ACK(m - 1,ACK(m,n - 1));
}

int main(){
	cin >> m >> n;
	cout << ACK(m,n);

	return 0;
}

