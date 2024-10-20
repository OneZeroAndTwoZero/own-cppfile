#include<bits/stdc++.h>
using namespace std;

long long a[40][40] = {0};

long long lu(long long n,long long m){
	if(n == 1 || m == 1) return 1;
	if(a[n][m] != 0){
		return a[n][m];
	}else{
		a[n][m] = lu(n - 1,m) + lu(n,m - 1);
		return a[n][m];
	}
}

int main(){
	long long n,m;
	cin >> n >> m;
	long long ans = lu(n,m);
	cout << ans << endl;

	return 0;
}

