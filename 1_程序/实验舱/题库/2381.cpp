#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t --){
		int n,m,r,c;
		cin >> n >> m >> r >> c;
		int t1 = (n - r) + (m - c),t2 = r + c - 2,t3 = (n - r) + c - 1,t4 = r - 1 + (m - c);
		cout << max({t1,t2,t3,t4}) << endl;
	}

	return 0;
}

