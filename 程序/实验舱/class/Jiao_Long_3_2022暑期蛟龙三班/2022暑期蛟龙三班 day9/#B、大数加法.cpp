#include<bits/stdc++.h>
using namespace std;

int ans[1005] = {0};
string a,b;

int main(){
	cin >> a;
	b = "2021";
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	int len = max(a.size(),b.size());
	for(int i = 0;i < a.size();i++){
		ans[i] = a[i] - '0';
	}
	for(int i = 0;i < b.size();i++){
		ans[i] = ans[i] + b[i] - '0';
	}
	for(int i = 0;i < len;i++){
		ans[i + 1] += (ans[i] == 0 ? 1 : ans[i]) / 10;
		ans[i] = ans[i] % 10;
	}
	if(ans[len] == 0) len --;
	for(int i = len;i >= 0;i--){
		cout << ans[i];
	}

	return 0;
}

