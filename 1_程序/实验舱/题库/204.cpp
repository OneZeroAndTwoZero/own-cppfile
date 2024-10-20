#include<bits/stdc++.h>
using namespace std;

int a[1002] = {0};

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a + n);
	for(int i = 0;i < n;i++){
		a[i] = a[i] / 2 + 1;
	}
	int k = 0,ans = 0;
	while(k <= n / 2){
		ans += a[k];
		k++;
	}
	cout << ans << endl;

	return 0;
}


