#include<bits/stdc++.h>
using namespace std;

map<string,int> mas; 

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		string s;
		cin >> s;
		string x = "";
		for(int i = 0;i < s.size();i++){
			x = x + s[i];
			mas[x] ++;
		}
	}
	
	string s,x = "";
	cin >> s;
	for(int i = 0;i < s.size();i++){
		x += s[i];
		cout << mas[x] << endl;
	}

	return 0;
}

