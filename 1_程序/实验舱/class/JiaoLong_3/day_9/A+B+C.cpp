#include<bits/stdc++.h>
using namespace std;

int ans[105] = {0};

int main(){
	string a,b,c;
	cin >> a >> b >> c;
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	reverse(c.begin(),c.end());
	int len = max(a.size(),b.size());
	if(c.size() > len) len = c.size();
	for(int i = 0;i < a.size();i++){
		ans[i] = a[i] - '0';
	}
	for(int i = 0;i < b.size();i++){
		ans[i] = ans[i] + b[i] - '0';
	}
	for(int i = 0;i < c.size();i++){
		ans[i] = ans[i] + c[i] - '0';
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

