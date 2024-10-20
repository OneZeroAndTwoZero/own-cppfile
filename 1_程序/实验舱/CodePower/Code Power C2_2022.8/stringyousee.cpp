#include<bits/stdc++.h>
using namespace std;

char mas(char c){
	if(c == 'a'){
		return 'b';
	}
	return 'a';
} 

char sifo(char c){
	if(c == 'z'){
		return 'y';
	}
	return 'z';
}

int main(){
	string s;
	getline(cin,s);
	int n = s.size();
	for(int i = 0;i < n;i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			if(i % 2 == 0){
				cout << mas(s[i]);
			}else{
				cout << sifo(s[i]);
			}
	    }
	}

	return 0;
}

