#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;
int a[15] = {0},b[15] = {0};

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i] >> b[i];
	}
	for(int i = n - 1;i >= 0;i--){
		ans -= a[i];
		if(ans < 0 || ans > 45){
			cout << -1 << endl;
			return 0;
		}
		ans += b[i];
		if(ans < 0 || ans > 45){
			cout << -1 << endl;
			return 0;
		}
	}
	cout << ans << endl;

	return 0;
}

