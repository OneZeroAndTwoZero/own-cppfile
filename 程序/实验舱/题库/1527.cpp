#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,m,x;
	cin >> n >> m >> x;
	long long i = ceil((long double)x / m);
	long long j = x - m * (i - 1);
	cout << i << " " << j << endl;

	return 0;
}

