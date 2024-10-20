#include<bits/stdc++.h>
using namespace std;

int main(){
	int m;
	cin >> m;
	while(m --){
		int n;
		cin >> n;
		int ans = 0;
		int now = 1;
		while(now < n){
			ans ++;
			now = now * 2;
		}
		cout << ans << endl;
	}

	return 0;
}

