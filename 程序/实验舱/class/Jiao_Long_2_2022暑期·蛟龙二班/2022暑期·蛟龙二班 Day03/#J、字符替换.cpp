#include<bits/stdc++.h>
using namespace std;

string s;
char ch1,ch2;

int main(){
	cin >> s;
	cin >> ch1 >> ch2;
	for(int i = 0;i < s.size();i++){
		if(s[i] == ch1){
			s[i] = ch2;
		}
	}
	cout << s << endl;
	
	return 0;
}
