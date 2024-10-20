#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,m;
	cin >> n >> m;
	long long k;
	cin >> k;
	if(n > m) swap(n,m);
	long long zd = 0;
	for(long long i = 1;i <= n;i++){
		if(n % i == 0){
			long long need = ceil(((double)k / (n / i)));
			if(need <= m){
				while(m % need != 0){
					need ++;
					if(need > m) continue;
				}
				long long j = m / need;
				long long d = i + j - 2;
				if(d > zd) zd = d;
			}
		}
	}
	cout << zd << endl;

	return 0;
}

