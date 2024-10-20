#include<bits/stdc++.h>
using namespace std;

int cz(int n){
	int ans = 0;
	for(int i = 1;i * i <= n;i++){
		ans ++;
	}
	return ans;
}

int main(){
	int t;
	cin >> t;
	while(t --){
		int n;
		cin >> n;
		cout << cz(n) << endl;
	}

	return 0;
}

