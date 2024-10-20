#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i = 0;i < t;i++){
		long long p,a,b,c;
		cin >> p >> a >> b >> c;
		long long a_b = (a - (p % a))%a;
		long long b_b = (b - (p % b))%b;
		long long t = a_b < b_b ? a_b : b_b;
		long long c_b = (c - (p % c))%c;
		t = t < c_b ? t : c_b;
		cout << t << endl;
	} 

	return 0;
}


