#include<bits/stdc++.h>
using namespace std;

int b[26] = {0};

bool su(int a){
	if(a % 2 == 0 && a != 2){
		return 0;
	}
	int n = sqrt(a);
	for(int i = 2;i <= n;i++){
		if(a % i == 0){
			return 0;
		}
	}
	return 1;
}

int max_min(string s){
	int n = s.size();
	int maxn = 0,minn = 114514;
	for(int i = 0;i < n;i++){
		b[s[i] - 'a']++;
	}
	for(int i = 0;i < 26;i++){
		if(b[i] > maxn){
			maxn = b[i];
		}
		if(b[i] < minn && b[i] != 0){
			minn = b[i];
		}
	}
	int cha = maxn - minn;
	return cha;
}

int main(){
	string s;
	cin >> s;
	int ans = max_min(s);
	if(su(ans)){
		cout << "Lucky Word" << endl << ans;
	}else{
		cout << "No Answer" << endl << '0';
	}

	return 0;
}
