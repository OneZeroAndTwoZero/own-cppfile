#include<bits/stdc++.h>
using namespace std;

long long a[10005] = {0};

int main(){
	int n;
	a[0] = 1;
	a[1] = 0;
	a[2] = 1;
	while(cin >> n){
		for(int i = 3;i < 101;i++){
			a[i] = 0;
		}
		for(int i = 3;i <= n;i++){
			for(int j = 0;j < i - 2;j++){
				a[i] += a[j];
			}
		}
		long long ans = 1;
		for(int i = 1;i <= n;i++){
			ans += a[i];
		}
		cout << ans << endl;
	}

	return 0;
}

