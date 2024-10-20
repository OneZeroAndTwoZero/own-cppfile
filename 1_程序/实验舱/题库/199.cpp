#include<bits/stdc++.h>
using namespace std;

string check;

void cz(string s,int n){
	if(s.size() == n){
		cout << s << endl;
		return;
	}
	for(int i = 0;i < n;i++){
		if(s.find(check[i],0) == check.npos){
			s = s + check[i];
			cz(s,n);
			string tem = "";
			for(int j = 0;j < s.size() - 1;j++){
				tem += s[j];
			}
			s = tem;
		}
	}
}

int main(){
	cin >> check;
	cz("",check.size());

	return 0;
}

