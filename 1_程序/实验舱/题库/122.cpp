#include<bits/stdc++.h>
using namespace std;

int a[100000] = {0};

void lu(string s){
	for(int i = 0;i < s.size();i++){
		if(s[i] >= '0' && s[i] <= '9') a[i] = s[i] - 48;
		else a[i] = s[i] - 'A' + 10;
	}
}

long long zhuan(int ws,int r){
	long long s = 0;
	int n = ws;
	while(ws--){
		s = s * r + a[n - ws - 1];
	}
	return s;
}

int main(){
	int r;
	cin >> r;
	string s;
	getline(cin,s);
	getline(cin,s);
	lu(s);
	cout << zhuan(s.size(),r) << endl;

	return 0;
}


