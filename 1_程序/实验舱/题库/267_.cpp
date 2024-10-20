#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,h;
	cin >> n >> h;
	long long sl = 0;
	for(int i = 0;i < n;i++){
		int t;
		cin >> t;
		sl += t;
	}
	long long ans = ceil((double)sl / (double)h);
	cout << ans << endl;

	return 0;
}

