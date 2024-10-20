#include<bits/stdc++.h>
using namespace std;

bool huiwen(long long a){
	long long s = 0;
	long long tem = a;
	while(a){
		s = s * 10 + a % 10;
		a /= 10;
	}
	if(s == tem){
		return 1;
	}
	return 0;
}

bool shu(long long a){
//	if(a % 2 == 0 && a != 2){
//		return 0;
//	}
    if(a < 2){
    	return 0;
	}
	long long n = sqrt(a);
	for(long long i = 2;i <= n;i++){
		if(a % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	long long n;
	long long sum = 0;
	cin >> n;
	long long a;
	for(long long i = 0;i < n;i++){
		cin >> a;
		if(huiwen(a) && shu(a)){
			sum ++;
		}
	}
	cout << sum << endl;

	return 0;
}

