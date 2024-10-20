#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a + n);
	int k = 0;
	int ans = 0;
	while(k < n - 1){
		ans += a[k] + a[k + 1];
		a[k + 1] += a[k];
		k ++;
		sort(a + k,a + n);
	}
	cout << ans << endl;

	return 0;
}

