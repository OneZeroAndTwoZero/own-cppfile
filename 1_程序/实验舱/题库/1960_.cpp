#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	bool p = 0,d = 0;
	string xunhuan = "";
	for(int i = 0;i < s.size();i++){
		if(s[i] == '.'){
			p = 1;
			continue;
		}
		if(p){
			if(!d && s[i] != '('){
				n --;
				if(n == 0){
					cout << s[i] << endl;
					return 0;
				}
			}else{
				if(s[i] == '('){
					d = 1;
					continue;
				}
				if(d && s[i] != ')' && s[i] != '('){
					xunhuan = xunhuan + s[i];
				}
			}
		}
	}
	n = (n - 1) % xunhuan.size();
	cout << xunhuan[n] << endl;

	return 0;
}

