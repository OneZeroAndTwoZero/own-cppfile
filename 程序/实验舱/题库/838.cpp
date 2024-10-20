#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
	long long tem = a;
	if(a < b){
		swap(a,b);
	}
	return a % b == 0 ? b : gcd(b,a % b);
}

int main(){
	int n;
	cin >> n;
	long long t1,t2;
	cin >> t1;
	for(int i = 1;i < n;i++){
		cin >> t2;
		t1 = t1 * t2 / gcd(t1,t2);
	}
	cout << t1 << endl;

	return 0;
}

