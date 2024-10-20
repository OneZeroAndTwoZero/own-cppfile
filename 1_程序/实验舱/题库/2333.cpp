#include<bits/stdc++.h>
using namespace std;

int a[500005] = {0};

int main(){
	long long n,k;
	cin >> n >> k;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	long long ans = 0;
	for(int i = 0;i < n;i++){
		long long now = 1;
		for(int j = i;j < n;j++){
			now *= a[j];
			if(now < k) ans ++;
			else break;
		}
	}
	cout << ans << endl;

	return 0;
}

