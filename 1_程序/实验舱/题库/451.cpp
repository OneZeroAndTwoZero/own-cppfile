#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	if(N == 0){
		cout << 0 << endl;
		return 0;
	}
	if(N < 0){
		cout << '-';
		N = abs(N);
	}
	bool o = 0;
	while(N){
		int a = N % 10;
		if(a != 0) o = 1;
		if(o) cout << a;
		N /= 10;
	}

	return 0;
}

