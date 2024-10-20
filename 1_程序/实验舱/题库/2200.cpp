#include<bits/stdc++.h>
using namespace std;

int a[1000005] = {0};

bool su(int n){
	if(n == 2) return 1;
	if(n % 2 == 0 || n < 2) return 0;
	for(int i = 2;i * i <= n;i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main(){
	int n;
	cin >> n;
	for(int i = 2;i <= n;i++){
		if(!su(i)){
			a[i] = a[i - 1] + 1;
		}
	}
	int zd = -1;
	for(int i = 0;i <= n;i++){
		zd = max(zd,a[i]);
	}
	cout << zd << endl;

	return 0;
}

