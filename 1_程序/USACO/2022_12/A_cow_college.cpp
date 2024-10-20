#include<bits/stdc++.h>
using namespace std;

long long d[1000005] = {0};

int main(){
	long long n;
	cin >> n;
	for(long long i = 0;i < n;i++){
		long long tem;
		cin >> tem;
		d[tem + 1] -= 1;
	}
	long long max = 0;
    long long max_n = 0;
	long long ky = n;
	for(long long i = 0;i < 1000005;i++){
		ky += d[i];
		long long now = i * ky;
		if(now > max){
			max = now;
			max_n = i;
		}
	}
	cout << max << " " << max_n << endl;

	return 0;
}
