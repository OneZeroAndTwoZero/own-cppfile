#include<bits/stdc++.h>
using namespace std;

long long cz(int x,int n){
	if(n == 0) return 1;
	if(n == 1) return 2 * x;
	return 2 * x * cz(x,n - 1) - 2 * (n - 1) * cz(x,n - 2);
}

int main(){
	int x,n;
	cin >> n >> x;
	cout << cz(x,n) << endl;

	return 0;
}

