#include<bits/stdc++.h>
using namespace std;

int ans[600005] = {0};
int a[600005] = {0};
int k = 0;

void jia(int n){
	for(int i = k;i < n + k;i++){
		ans[i - k] += a[i];
	}
}

int main(){
	string s;
	cin >> s;
	int n = s.size();
	for(int i = s.size() - 1;i >= 0;i--){
		a[i] = (int)(s[n - i - 1] - '0');
	}
	while(k < s.size()){
		jia(n);
		k ++,n --;
	}
	for(int i = 0;i < 500009;i++){
		ans[i + 1] += ans[i] / 10;
		ans[i] %= 10;
	}
	int ks = 500009;
	while(ans[ks] == 0){
		ks --;
	}
	for(int i = ks;i >= 0;i--){
		cout << ans[i];
	}
	cout << endl;

	return 0;
}

