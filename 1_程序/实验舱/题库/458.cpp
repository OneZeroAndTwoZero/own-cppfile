#include<bits/stdc++.h>
using namespace std;

long long one(long long a){
	long long y = 0;
	while(a){
		int tem = a % 2;
		if(tem) y ++;
		a /= 2;
	}
	return y;
}

int main(){
	long long n;
	cin >> n;
	long long sum = 0,tem;
	for(long long i = 0;i < n;i++){
		cin >> tem;
		sum += one(tem);
	}
	cout << sum << endl;

	return 0;
}

