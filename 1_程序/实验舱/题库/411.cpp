#include<bits/stdc++.h>
using namespace std;

int main(){
	long long ans = 0;
	long long n;
	cin >> n;
	for(long long i = 0;i < n;i++){
		long long tem;
		cin >> tem;
		ans = ans ^ tem;
	} 
	cout << ans << endl;

	return 0;
}

