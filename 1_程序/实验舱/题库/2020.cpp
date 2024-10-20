#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int zd = -1,zx = 1000000;
	for(int i = 0;i < n;i++){
		zd = max(zd,a[i]);
		zx = min(zx,a[i]);
	}
	int max_n = 0,min_n = 0;
	for(int i = 0;i < n;i++){
		if(a[i] == zd) max_n ++;
		if(a[i] == zx) min_n ++;
	}
	cout << zx << " " << min_n << endl;
	cout << zd << " " << max_n << endl;

	return 0;
}

