#include<bits/stdc++.h>
using namespace std;

int s[128] = {0},now[128] = {0},ans = 0;
string a;

bool check(){
	for(int i = 0;i < 128;i++){
		if(now[i] && s[i]) return 0;
	}
	return 1;
}

int main(){
	cin >> a;
	for(int i = 0;i < a.size();i++){
		s[a[i]] ++;
	}
	for(int i = 0;i < a.size();i++){
		now[a[i]] ++;
		s[a[i]] --;
		if(check()){
			memset(now,0,sizeof(now));
			ans ++;
		}
	}
	cout << ans << endl;

	return 0;
}

