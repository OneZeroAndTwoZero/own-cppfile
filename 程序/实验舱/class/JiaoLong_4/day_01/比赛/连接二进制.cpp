#include<bits/stdc++.h>
using namespace std;

long long er(long long a){
	for(long long i = 0;;i++){
		if(pow(2,i) > a) return i;
	}
}

int main(){
	long long n;
	cin >> n;
	long long ans = 0;
	long long bs = 1;
	long long jia = er(n);
	long long check = pow(2,jia - 1);
	for(long long i = n;i > 0;i--){
		ans += i * bs;
		ans %= 10000000000;
		bs *= pow(2,jia);
		bs %= 1000000000;
		if(i == check){
			jia --;
			check /= 2;
		}
	}
	ans %= 1000000007;
	cout << ans << endl;

	return 0;
}

