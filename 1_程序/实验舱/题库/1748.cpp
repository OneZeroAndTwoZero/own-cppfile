#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};

int main(){
	int n,x;
	cin >> n >> x;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a + n);
	int ans = 0;
	for(int i = 0;i < n - 1;i++){
		ans += min(x,a[i + 1] - a[i]);
	}
	ans += x;
	cout << ans << endl;

	return 0;
}

