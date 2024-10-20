#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin >> T;
	long long m;
	for(int i = 1;i <= T;i++){
		cin >> m;
		long long k = ceil((m - 6) / 4.0);
		cout << k << " " << k + 1 << " " << k + 2 << " " << k + 3 << endl;
	} 

	return 0;
}

