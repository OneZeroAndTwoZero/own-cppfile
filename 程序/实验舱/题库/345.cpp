#include<bits/stdc++.h>
using namespace std;

bool hui(string s){
	int f = 0,l = s.size() - 1;
	while(s[f] == s[l]){
		if(f >= l) return 1;
		f ++,l --;
	}
	return 0;
}

int main(){
	int max = -1;
	string s;
	cin >> s;
	for(int i = 0;i < s.size();i++){
		for(int j = 1;j <= s.size() - i;j ++){
			string tem = s.substr(i,j);
			if(hui(tem)){
				if(j > max) max = j;
			}
		}
	}
	cout << max << endl;

	return 0;
}

