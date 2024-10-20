#include<bits/stdc++.h>
using namespace std;

long long n,m;

long long yang(long long n,long long m){
	if(m == 1 || m == n || n == 1) return 1;
	return yang(n - 1,m) + yang(n - 1,m - 1);
}

int main(){
	cin >> n >> m;
	cout << yang(n,m) << endl;

	return 0;
}

