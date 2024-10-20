#include<bits/stdc++.h>
using namespace std;

int a[1000005] = {0};
int zz[1000005] = {0};

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	for(int i = 1;i < n;i++){
		if(a[i] > a[i - 1]) zz[i] = zz[i - 1] + 1;
	}
	int max_ = -1;
	for(int i = 0;i < n;i++){
		max_ = max(max_,zz[i]);
	}
	cout << max_ + 1 << endl;

	return 0;
}

