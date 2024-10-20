#include<bits/stdc++.h>
using namespace std;

int max_g(int n,int x){
	if(n % x == 0) return x;
	return max_g(x,n % x);
}

int main(){
	int n,x;
	cin >> n >> x;
	int max = max_g(n,x);
	cout << n / max << "/" << x / max << endl;

	return 0;
}

