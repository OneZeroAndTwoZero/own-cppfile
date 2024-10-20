#include<bits/stdc++.h>
using namespace std;

int a[1005] = {0};

long long he(long long a){
	long long ans = 0;
	while(a){
		ans += a % 10;
		a /= 10;
	}
	return ans;
}

int main(){
	long long l,r;
	cin >> l >> r;
	if(r - l > 1000000000) return 0;
	for(long long i = l;i <= r;i++){
		a[(int)he(i)] ++;
	}
	long long max_ = -1;
	for(long long i = 0;i < 1005;i++){
		max_ = max(max_,(long long)a[i]);
	}
	cout << max_ << endl;

	return 0;
}

