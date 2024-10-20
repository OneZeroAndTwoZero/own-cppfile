#include<bits/stdc++.h>
using namespace std;

string s;
int n,ans = 0;

int num(int l){
	int re = 0;
	int a[128] = {0},b[128] = {0};
	for(int i = 0;i < l;i++){
		a[s[i]] ++;
	}
	for(int i = l;i < n;i++){
		b[s[i]] ++;
	}
	for(int i = 0;i < 128;i++){
		re += a[i] && b[i];
	}
	return re;
}

int main(){
	cin >> n >> s;
	for(int i = 1;i < n - 1;i++){
		ans = max(ans,num(i));
	}
	cout << ans << endl;

	return 0;
}

