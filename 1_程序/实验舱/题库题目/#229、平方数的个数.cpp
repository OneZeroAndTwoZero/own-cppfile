#include<bits/stdc++.h>
using namespace std;

int t;
long long l,r,ans;

int main(){
	cin >> t;
	while(t --){
		cin >> l >> r;
		ans = (long long)sqrt(r) - (long long)sqrt(l - 1);
		cout << ans << endl;
	}

	return 0;
}

