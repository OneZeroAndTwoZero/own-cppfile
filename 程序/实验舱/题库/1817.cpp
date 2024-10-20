#include<bits/stdc++.h>
using namespace std;

int a[100] = {0};

int ws(long long a){
	int ans = 0;
	a /= 2;
	while(a){
		ans ++;
		a /= 2;
	}
	return ans;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		long long tem;
		cin >> tem;
		a[ws(tem)] ++;
	}
	for(int i = 1;i < 100;i++){
		a[i] += a[i - 1] / 2;
	}
	int max = -1;
	for(int i = 0;i < 100;i++){
		if(a[i] != 0){
			if(i > max){
				max = i;
			}
		}
	}
	long long ans = pow(2,max);
	cout << ans << endl;

	return 0;
}

