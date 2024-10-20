#include<bits/stdc++.h>
using namespace std;

bool ok(string s,string t){
	for(int i = 0;i < s.size();i++){
		if(t[i % t.size()] != s[i]) return 0;
	}
	return 1;
}

int main(){
	int min = 10000;
	string s,min_s;
	cin >> s;
	for(int i = 0;i < s.size();i++){
		for(int j = 1;j < s.size() - i;j++){
			string tem = s.substr(i,j);
			if(ok(s,tem)){
				if(j < min){
					min = j;
					min_s = tem;
				}
			}
		}
	}
	cout << min_s << endl;

	return 0;
}

