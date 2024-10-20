#include<bits/stdc++.h>
using namespace std;

bool su(long long a){
	if(a < 2 || (a % 2 == 0 && a != 2)) return 0;
	int n = sqrt(a);
	for(int i = 2;i <= n;i++){
		if(a % i == 0) return 0;
	}
	return 1;
}

int main(){
	long long n;
	cin >> n;
	int j = sqrt(n);
	for(long long i = 2;i <= j;i++){
		if(n % i == 0){
			long long o = n / i;
			if(su(i) && su(o)){
				cout << o << endl;
				return 0;
			}
		}
	}

	return 0;
}

