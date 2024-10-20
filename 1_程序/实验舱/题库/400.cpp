#include<bits/stdc++.h>
using namespace std;

int main(){
	int l[21];
	l[1] = 1,l[2] = 1;
	int n;
	cin >> n;
	if(n == 1 || n == 2){
		cout << 1 << endl;
		return 0;
	}
	for(int i = 3;i <= n;i++){
		l[i] = l[i - 2] + l[i - 1];
	}
	cout << l[n] << endl; 

	return 0;
}

