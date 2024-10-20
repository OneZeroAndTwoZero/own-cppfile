#include<bits/stdc++.h>
using namespace std;

int ans[600005] = {0};
int a[600005] = {0};
int k = 0;

int main(){
	string s;
	cin >> s;
	int he = 0;
	int n = s.size();
	for(int i = 0;i < n;i++){
		a[n - i - 1] = s[i] - '0';
		he += a[n - i - 1];
	}
	for(int i = 0;k < n;i ++,k ++){
		ans[i] = he;
		he -= a[k];
	}
	for(int i = 0;i < 600003;i++){
		ans[i + 1] += ans[i] / 10;
		ans[i] %= 10;
	}
	int ks = 600003;
	while(ans[ks] == 0) ks --;
	for(int i = ks;i >= 0;i--){
		cout << ans[i];
	}
	cout << endl;

	return 0;
}

