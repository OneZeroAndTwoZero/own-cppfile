#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};
int d[100005] = {0};

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	d[0] = a[0];
	for(int i = 1;i < n;i++){
		d[i] = a[i] - a[i - 1];
	}
	int z = 0,f = 0;
	for(int i = 0;i < n;i++){
		if(d[i] > 0) z += d[i];
		if(d[i] < 0) f += abs(d[i]);
	}
	cout << max(z,f) << endl;

	return 0;
}

