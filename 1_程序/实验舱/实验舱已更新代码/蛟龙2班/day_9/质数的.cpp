#include<bits/stdc++.h>
using namespace std;

bool su(long long a){
	if(a % 2 == 0 && a != 2){
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

long long zhi(int s){
	if(s % 2 == 1){
		return 2 * (s - 2);
	}
	long long i = 2,j = s - i;
	long long max = 0;
	while(i <= j){
		if(su(i) && su(j)){
			max = i * j;
		}
		i++,j--;
	}
	return max;
}

int main(){
	long long S;
	cin >> S;
	long long ans = zhi(S);
	cout << ans << endl;

	return 0;
}

