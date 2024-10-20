#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t;
	cin >> t;
	while(t --){
		long long m,n,d;
		cin >> m >> n >> d;
		bool ok = 0;
		if(d == 1){
			if(n <= 13){
				long long check = 1;
				for(long long i = n;i > 0;i--){
					check *= i;
				}
				if(check <= m) ok = 1;
			}
		}else if(d == 2){
			if(n <= 35){
				long long check = pow(2,n);
				if(check <= m) ok = 1;
			}
		}else if(d == 3){
			if(n <= 1000){
				long long check = n * n * n * n;
				if(check <= m){
					ok = 1;
				}
			}
		}else if(d == 4){
			if(n <= 100000){
				long long check = n * n * n;
				if(check <= m) ok = 1;
			}
		}else if(d == 5){
			long long check = n * n;
			if(check <= m) ok = 1;
		}else if(d == 6){
			if(n <= m) ok = 1;
		}else{
			long long check = n * ceil(log2(n));
			if(check <= m) ok = 1;
		}
		if(ok){
			cout << "AC" << endl;
		}else{
			cout << "TLE" << endl;
		}
	}

	return 0;
}

