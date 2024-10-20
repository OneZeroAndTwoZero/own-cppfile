#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,x,k;
	cin >> n >> x >> k;
	long long he = 0;
	for(int i = 0;i <n;i++){
		int t;
		cin >> t;
		he += t;
	}
	long long cha = abs(k - he);
	long long ans = ceil((double)cha / x);
	cout << ans << endl;

	return 0;
}

