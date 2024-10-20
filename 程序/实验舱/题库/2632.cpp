#include<bits/stdc++.h>
using namespace std;

int a[105] = {0};

int main(){
	int n;
	cin >> n;
	a[0] = 0;
	for(int i = 1;i < n;i++){
		cin >> a[i];
	}
	for(int i = 1;i < n;i++){
		a[i] += a[i - 1];
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cout << abs(a[i] - a[j]) << " ";
		}
		cout << endl;
	}

	return 0;
}

