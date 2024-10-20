#include<bits/stdc++.h>
using namespace std;

int toten(string s){
	int ans = 0;
	for(int i = 0;i < s.size();i++){
		ans = ans * 10 + (s[i] - '0');
	}
	return ans;
}

int cz(string s){
	while(s.size() > 0){
		if(s[0] == 'f' && s[1] == 'd' || s[0] == 'b' && s[1] == 'k'){
			string tem = "";
			for(int i = 3;;i++){
				if(s[i] != ')'){
					tem += s[i];
				}else{
					if(s[0] == 'b' && s[1] == 'k'){
						return -1 * toten(tem);
					}
					return toten(tem);
				}
			}
		}
	}
}

int main(){
	string s;
	cin >> s;
	int ans = 0;
	for(int i = 0;i < s.size();i++){
		if(s[i] == ')'){
			ans += cz(s.substr(0,i + 1));
			s = s.substr(i + 1,s.size() - i - 1);
			i = 0;
		}
	}
	cout << abs(ans) << endl;

	return 0;
}

