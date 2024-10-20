#include<bits/stdc++.h>
using namespace std;

int a[26] = {0};
bool ok[26] = {0};

int zhuan(string s){
	int ans = 0;
	for(int i = 0;i < s.size();i++){
		ans = ans * 10 + (s[i] - '0');
	}
	return ans;
}

int main(){
	string s;
	cin >> s;
	string tem = "";
	for(int i = 0;i < s.size();i++){
		if(s[i] >= '0' && s[i] <= '9'){
			tem = tem + s[i];
		}else{
			if(s[i] >= 'A' && s[i] <= 'Z'){
				ok[s[i] - 'A'] = 1;
				a[s[i] - 'A'] = zhuan(tem);
				tem = "";
			}
		}
	}
	int zx = 10000,zd = -1;
	for(int i = 0;i < 26;i++){
		if(ok[i]){
			zx = min(zx,a[i]);
			zd = max(zd,a[i]);
		}
	}
	for(int i = 0;i < 26;i++){
		if(a[i] == zd){
			cout << (char)(i + 'A');
			break;
		}
	}
	for(int i = 0;i < 26;i++){
		if(a[i] == zx){
			cout << (char)(i + 'A');
			break;
		}
	}
	cout << endl;

	return 0;
}

