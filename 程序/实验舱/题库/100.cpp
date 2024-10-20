#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
	return b % a == 0 ? a : gcd(b % a,a);
}

int main(){
	long long a1,b1,a2,b2;
	cin >> a1 >> b1 >> a2 >> b2;
	int fh = 1;
	long long m = b1 * b2,z = a1 * b2 + a2 * b1;
	if(z < 0){
		fh = -1;
		z = abs(z);
	}
	int d = 0;
	if(z >= m){
		d = z / m;
		d *= fh;
		z %= m;
	}
	if(z == 0){
		cout << d << endl;
		return 0;
	}
	long long g = gcd(z,m);
	z /= g,m /= g;
	if(d){
	    cout << d;
	    if(fh < 0) cout << "-";
	    else cout << "+";
	    if(z) cout << z << "/" << m << endl;
	}else{
		if(fh < 0) cout << "-";
		cout << z << "/" << m << endl;
	}

	return 0;
}

