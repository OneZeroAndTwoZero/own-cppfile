#include<bits/stdc++.h>
using namespace std;

map<string,int> zhuan;

int main(){
	zhuan["Jan"] = 1,zhuan["Feb"] = 2,zhuan["Mar"] = 3,zhuan["Apr"] = 4,zhuan["May"] = 5,zhuan["Jun"] = 6;
	zhuan["Jul"] = 7,zhuan["Aug"] = 8,zhuan["Sep"] = 9,zhuan["Oct"] = 10,zhuan["Nov"] = 11,zhuan["Dec"] = 12;
	string s;
	cin >> s;
	string a = s.substr(0,3);
	string b = s.substr(3,2);
	int day;
	sscanf(b.c_str(),"%d",&day);
	int month = zhuan[a];
	cout << month << " " << day << endl;
	

	return 0;
}

