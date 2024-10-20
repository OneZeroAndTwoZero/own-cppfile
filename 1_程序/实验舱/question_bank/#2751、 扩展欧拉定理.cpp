#include<bits/stdc++.h>
using namespace std;

long long a,k,mod,cur = 0;
string s;

long long qpow(long long a,long long b){
	if(b == 0) return 1;
	long long res = qpow(a,b >> 1);
	res = (res * res) % mod;
	if(b & 1) res = (res * a) % mod;
	return res;
}

long long euler(long long x){
	long long res = x;
	for(long long i = 2;i <= x / i;i ++){
		if(x % i) continue;
		res = res / i * (i - 1);
		while(x % i == 0) x /= i;
	}
	if(x != 1) res = res / x * (x - 1);
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> a >> mod >> s;
    k = euler(mod);
    int len = s.size();
    for(int i = 0;i < len;i ++){
		cur = (cur << 3) + (cur << 1) + (s[i] ^ 48);
		cur = cur % k;
	}
	cout << qpow(a,cur + k) << "\n";

    return 0;
}
