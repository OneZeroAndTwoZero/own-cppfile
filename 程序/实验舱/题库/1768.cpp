#include<bits/stdc++.h>
using namespace std;

long long a[100005] = {0};

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	long long ans = 0;
	for(int i = 0;i < n - 1;i++){
		a[i + 1] += a[i];
		ans += abs(a[i]);
	}
	cout << ans << endl;

	return 0;
}

