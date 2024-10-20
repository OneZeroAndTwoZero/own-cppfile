#include<bits/stdc++.h>
using namespace std;

set<string> a; 

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		string tem;
		cin >> tem;
		a.insert(tem);
	}
	int c1 = a.size();
	getchar();
	string s;
	getline(cin,s);
	s += " ";
	int i = 0,sum = 0;
	while(i < s.size() - 2){
		int pos = s.find(" ",i + 1);
		cout << pos << "*\n";
		string x = "";
		for(int j = i;j < pos;j++){
			x += s[j];
		}
		i = pos;
		a.insert(x);
		sum ++;
	}
	int c2 = a.size();
	cout << sum - (c2 - c1) << endl;

	return 0;
}

