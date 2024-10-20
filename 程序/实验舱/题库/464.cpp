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
	for(long long i = n - i;i > 0;i--){
		if(n % i == 0 && su(i)){
			cout << i << endl;
			return 0;
		}
	}

	return 0;
}

