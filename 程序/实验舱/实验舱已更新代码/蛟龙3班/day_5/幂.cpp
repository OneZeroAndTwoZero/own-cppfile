#include<bits/stdc++.h>
using namespace std;

long long quick(int a,int b,int k){
	if(b == 0) return 1;
	if(b == 1) return a % k;
	long long ans = quick(a,b / 2,k);
	ans = ans % k * ans % k;
	if(b % 2 == 1) ans = (ans * a) % k;
	return ans % k;
}

int main(){
	int a,b,m;
	cin >> a >> b >> m;
	cout << quick(a,b,m);

	return 0;
}

