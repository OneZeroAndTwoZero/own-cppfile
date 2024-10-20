#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	if(b > a) swap(a,b);
	return b == 0 ? a : gcd(b,a % b);
}

int main(){
	int n;
	cin >> n;
	int ans;
	cin >> ans;
	for(int i = 1;i < n;i++){
		int t;
		cin >> t;
		ans = gcd(ans,t);
	} 
	cout << ans << endl;

	return 0;
}

