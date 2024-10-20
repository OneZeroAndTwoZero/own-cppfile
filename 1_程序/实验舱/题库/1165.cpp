#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n,k;
	cin >> m >> n;
	cin >> k;
	int sm = 0,sn = 0;
	for(int i = 0;i < k;i++){
		sm = sm % m + 1;
		sn = sn % n + 1;
		cout << sm << " " << sn << endl;
	}

	return 0;
}

