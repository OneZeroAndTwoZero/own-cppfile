#include<bits/stdc++.h>
using namespace std;

int sum = 0;
string s;
	
int main(){
	getline(cin,s);
	for(int i = 0;i < s.size();i++){
		sum += (int)s[i];
		sum -= 48;
	}
	cout << sum << endl;
	
	return 0;
}
