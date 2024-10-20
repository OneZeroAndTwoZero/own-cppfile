#include<bits/stdc++.h>
using namespace std;

int n;
int a[10005];

bool ok(int a){
	int w[4];
	w[0] = a % 10;
	w[1] = a / 10 % 10;
	w[2] = a / 100 % 10;
	w[3] = a / 1000 % 10;
	int ans = w[0] - (w[1] + w[2] + w[3]);
	if(ans > 0){
		return 1;
	}
	return 0;
}

int main(){
	cin >> n;
	int sum = 0;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		if(ok(a[i])) sum += 1;
	}
	cout << sum << endl;
	
	return 0;
}
