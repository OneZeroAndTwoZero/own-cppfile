#include<bits/stdc++.h>
using namespace std;

int main(){
	long long N;
	cin >> N;
	N = abs(N);
	if(N == 0){
		cout << 0 << endl;
		return 0;
	}
	while(N){
		cout << N % 10 << " ";
		N /= 10;
	}

	return 0;
}

