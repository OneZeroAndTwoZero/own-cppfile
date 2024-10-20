#include<bits/stdc++.h>
using namespace std;

int a[10005] = {0};

void cz(int k){
	for(int i = 0;i < 10001;i ++){
		a[i] = a[i] * k;
	}
	for(int i = 0;i < 10001;i++){
		a[i + 1] += a[i] / 10;
		a[i] %= 10;
	}
}

int main(){
	int x,n;
	cin >> x >> n;
	if(n == 0){
		cout << 1 << endl;
		return 0;
	}
	a[0] = x;
	for(int i = 1;i < n;i++){
		cz(x);
	}
	int t = 10001;
	while(a[t] == 0){
		t --;
	}
	for(int i = t;i >= 0;i--){
		cout << a[i];
	}
	cout << endl;

	return 0;
}

