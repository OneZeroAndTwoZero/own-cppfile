#include<bits/stdc++.h>
using namespace std;

int a[32] = {0};

void totwo(long long n){
	for(int i = 31;i >= 0;i--){
		a[i] = n % 2;
		n /= 2;
	}
	for(int i = 0;i < 16;i++){
		swap(a[i],a[i + 16]);
	}
}

long long toten(){
	long long ans = 0;
	for(int i = 0;i < 32;i++){
		ans = ans * 2 + a[i];
	}
	return ans;
}

int main(){
	long long n;
	cin >> n;
	totwo(n);
	cout << toten() << endl;

	return 0;
}

