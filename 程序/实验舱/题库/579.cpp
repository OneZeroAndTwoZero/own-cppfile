#include<bits/stdc++.h>
using namespace std;

int a[1000005] = {0};

int main(){
	a[0] = 1,a[1] = 2;
	for(int i = 2;i <= 1000000;i++){
		a[i] = (2 * a[i - 1] + a[i - 2]) % 32767;
	}
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int k;
		cin >> k;
		cout << a[k - 1] << endl;
	}

	return 0;
}

