#include<bits/stdc++.h>
using namespace std;

int cz(int a){
	if(a % 10 == 0) a/= 10;
	else a --;
	return a;
}

int main(){
	int n,k;
	cin >> n >> k;
	for(int i = 0;i < k;i++){
		n = cz(n);
	}
	cout << n << endl;

	return 0;
}

