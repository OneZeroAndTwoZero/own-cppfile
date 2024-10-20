#include<bits/stdc++.h>
using namespace std;

int main(){
	long long x,n;
	cin >> x >> n;
	long long ans = 0;
	if(n <= 7 - x + 1){
		for(int i = x;i < n + x;i++){
			if(i < 6) ans += 2333;
		}
		cout << ans << endl;
		return 0;
	}
	ans = (5 - x + 1) * 2333 >= 0 ? (5 - x + 1) * 2333 : 0;
	n -= (7 - x + 1);
	ans += 2333 * (n / 7) * 5;
	n %= 7;
	ans += n <= 5 ? n * 2333 : 5 * 2333;
	cout << ans << endl;

	return 0;
}

