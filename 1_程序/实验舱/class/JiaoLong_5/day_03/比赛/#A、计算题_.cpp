#include<bits/stdc++.h>
using namespace std;

string s;
long long ans,m = 1000000007,n;

long long cz(long long a,long long b,long long ms){
	if(b == 0){
		return 1;
	}
	long long t = cz(a,b / 2,ms);
	if(b & 1){
		return (t * t % ms) * a % ms;
	}else{
		return (t * t) % ms;
	}
}

int main(){
	cin >> n >> s;
	for(int i = 0;i < s.size();i++){
		cout << i << "[][][]\n";
		ans += ((s[i] - '0') * cz(10LL,s.size() - i - 1,m - 1)) % (m - 1);
	}
	ans++;
	ans %= m;
	cout << cz(n,ans,m) - 1 << endl;

	return 0;
}

