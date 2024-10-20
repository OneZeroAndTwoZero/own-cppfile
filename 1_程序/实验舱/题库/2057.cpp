#include<bits/stdc++.h>
using namespace std;

int a[10005] = {0};

int main(){
	int m,n;
	cin >> m >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a + n);
	int f = 0,l = n - 1;
	int max = 0;
	for(int i = 0;i < m;i++){
		max += a[l] - a[f];
		f ++,l --;
	}
	cout << max << endl;

	return 0;
}

