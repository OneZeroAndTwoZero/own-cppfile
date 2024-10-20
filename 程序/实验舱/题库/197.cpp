#include<bits/stdc++.h>
using namespace std;

long long jie(int n){
	long long ans = n;
	for(int i = n - 1;i > 0;i--){
		ans *= i;
	}
	return ans;
}

int main(){
	int n;
	cin >> n;
	long long ans = 0;
	for(int i = 1;i <= n;i++){
		ans += jie(i);
	}
	cout << ans << endl;

	return 0;
}

