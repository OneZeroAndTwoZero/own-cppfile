#include<bits/stdc++.h>
using namespace std;

int a[1005] = {0};
int ans[10005] = {0};
int k = 0;

void cz(string a_t,int b,int n){
	for(int i = 0;i < a_t.size();i++){
		a[i] = a_t[i] - '0';
	}
	int y = 0;
	for(int i = 0;i < a_t.size();i++){
		int x = a[i] + y * 10;
		ans[i] = x / b;
		y = x % b;
	}
	for(int i = a_t.size();i - a_t.size() <= n;i++){
		int x = y * 10;
		ans[i] = x / b;
		y = x % b;
	}
	while(ans[k] == 0 && k < a_t.size()){
		k ++;
	}
	if(k == a_t.size()){
		k -= 1;
	}
}

int main(){
	string a_t;
	cin >> a_t;
	int b,n;
	cin >> b >> n;
	cz(a_t,b,n);
	for(int i = 0;i < 100;i++){
	}
	for(int i = k;i < a_t.size();i++){
		cout << ans[i];
	}
	cout << '.';
	for(int i = a_t.size();i - a_t.size() < n;i++){
		cout << ans[i];
	}
	cout << endl;

	return 0;
}

