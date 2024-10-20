#include<bits/stdc++.h>
using namespace std;

int main(){
	long long ans;
	int m,n;
	cin >> m >> n;
	ans = 2 * m + 1;
	while(n --){
		ans += 2 * ans - 2 * m - 1;
	}
	cout << ans << endl;

	return 0;
}

