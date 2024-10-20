#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};

int main(){
	long long ans = 0;
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a + n);
	for(int i = 0;i < n - 1;i++){
		ans += a[i] * (i + 1);
	}
	ans += a[n - 1] * (n - 1);
	cout << ans << endl;

	return 0;
}

