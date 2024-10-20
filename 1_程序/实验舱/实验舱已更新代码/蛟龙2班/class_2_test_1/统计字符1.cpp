#include<bits/stdc++.h>
using namespace std;

int main(){
	int b[26] = {};
	string s;
	getline(cin,s);
	for(int i = 0;i < s.size();i++){
		if(s[i] >= 'a' && s[i] <='z'){
			b[s[i] - 'a']++;
		}
	}
	int max = 0;
	for(int i = 0;i < 26;i++){
		if(b[i] > max){
			max = b[i];
		}
	}
	cout << max << endl;
	for(int i = 0;i < 26;i++){
		if(b[i] == max){
			cout << (char)(i + 'a') << " ";
		}
	}
	
	return 0;
}
