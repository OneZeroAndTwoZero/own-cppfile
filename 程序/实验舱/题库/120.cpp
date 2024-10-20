#include<bits/stdc++.h>
using namespace std;

void out_(int a){
	int i = 0;
	while(a){
		int s = a % 2;
		if(s == 1) cout << i << " ";
		a /= 2;
		i++;
	}
}

int main(){
	int n;
	cin >> n;
	if(n < 1 || n > 1000000){
		cout << "error" << endl;
		return 0;
	}
	out_(n);

	return 0;
}

