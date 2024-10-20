#include<bits/stdc++.h>
using namespace std;

string name(string s,int i){
	string tem = "";
	while(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'){
		tem = tem + s[i];
		i ++;
	}
	return tem;
}

string num(string s,int i){
	string tem = "";
	while(s[i] >= '0' && s[i] <= '9'){
		tem = tem + s[i];
		i ++;
	}
	return tem;
}

int main(){
	string s;
	cin >> s;
	int i = 0;
	while(i < s.size()){
		string a1 = name(s,i);
		cout << a1 << " ";
		i += a1.size();
		if(s[i ++] == '+'){
			cout << "tighten ";
		}else{
			cout << "loosen ";
		}
		string a2 = num(s,i);
		cout << a2 << endl;
		i += a2.size();
	}

	return 0;
}

