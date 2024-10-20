#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};

int main(){
	int n;
	cin >> n;
	long long ans = 0;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		ans += a[i];
	}
	sort(a,a + n);
	int s = n - (n / 3 * 3);
	for(int i = 0;i * 3 + s <= n;i++){
		ans -= a[i * 3 + s];
	}
	cout << ans << endl;

	return 0;
}

