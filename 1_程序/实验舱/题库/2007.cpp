#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	string s;
	getline(cin,s);
	int now = 0;
	for(int i = 0;i < n;i++){
		getline(cin,s);
		if(s.find("qiandao",0) != s.npos || s.find("easy",0) != s.npos){
			continue;
		}else{
			if(now == m){
				cout << s << endl;
			}
			now ++;
		}
	}
	if(now < m){
		cout << "Wo AK le" << endl;
		cout << now << endl;
	}

	return 0;
}

