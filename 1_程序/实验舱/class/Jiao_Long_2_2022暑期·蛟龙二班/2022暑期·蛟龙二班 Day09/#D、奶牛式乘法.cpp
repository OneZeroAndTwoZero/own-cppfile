#include<bits/stdc++.h>
using namespace std;

long long A,B;

long long suan(long long a,long long b){
	int sum = 0;
	int tem = b;
	while(a){
		b = tem;
		while(b){
			sum += (a % 10) * (b % 10);
			b /= 10;
		}
		a /= 10;
	}
	return sum;
}

int main(){
	cin >> A >> B;
	cout << suan(A,B) << endl;

	return 0;
}

