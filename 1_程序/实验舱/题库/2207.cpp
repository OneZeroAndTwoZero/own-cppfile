#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	for(int i = 0;i < s.size();i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] = s[i] - 'A' + 'a';
		}
	}
	int pos = 0;
	int sum = 0;
	while(1){
		if(s.find("lanqiao",pos) != s.npos){
			sum ++;
			pos = s.find("lanqiao",pos) + 1;
		}else{
			break;
		}
	}
	cout << sum << endl;

	return 0;
}

