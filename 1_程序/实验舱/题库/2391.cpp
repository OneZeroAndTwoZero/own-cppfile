#include<bits/stdc++.h>
using namespace std;

int main(){
	long long ans = 0;
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			long long t;
			cin >> t;
			ans += abs(i - j) * t;
		}
	}
	cout << ans << endl;

	return 0;
}

