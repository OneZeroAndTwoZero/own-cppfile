#include<bits/stdc++.h>
using namespace std;

int a[1005] = {0};
int f[1005] = {0};
int n,ans = 0;

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	f[0] = f[1] = 1;
	int now,pos = 2;
	while(now <= 1e9 && pos < 1000){
		now = f[pos - 1] + f[pos - 2];
		f[pos ++] = now;
	}
	for(int i = 0;i < n;i++){
		ans += binary_search(f,f + pos,a[i]);
	}
	cout << ans << endl;

	return 0;
}

