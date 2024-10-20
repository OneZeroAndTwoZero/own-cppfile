#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int b[128] = {};
	getline(cin,s);
	for(int i = 0;i < s.size();i++){
		b[s[i]]++;
	}
	int max = 0;
	for(int i = 0;i < 128;i++){
		if(b[i] > max){
			max = b[i];
		}
	}
	cout << max << endl;
	for(int i = 0;i < 128;i++){
		if(b[i] == max){
			cout << (char)i << " ";
		}
	}
	
	return 0;
}
