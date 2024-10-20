#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i = 0;i < t;i++){
		int n,m;
		cin >> n >> m;
		int qi = (m - 2 * n) / 2;
		int zi = n - qi;
		if(qi * 4 + zi * 2 == m && qi >= 0 && zi >= 0){
			cout << qi << " " << zi << endl;
		}else{
			cout << "error" << endl;
		}
	}

	return 0;
}

