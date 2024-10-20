#include<bits/stdc++.h>
using namespace std;

int a[10005] = {0};

int main(){
	int n,k;
	cin >> n >> k;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a + n);
	int zd = -1;
	for(int i = 0;i < n;i++){
		int sx = a[i] + k;
		int ans = 0;
		for(int j = i;j < n;j++){
			if(a[j] > sx) break;
			ans ++;
		}
		zd = max(zd,ans);
	}
	cout << zd << endl;

	return 0;
}

