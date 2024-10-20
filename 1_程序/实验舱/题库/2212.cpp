#include<bits/stdc++.h>
using namespace std;

int b[6] = {0}; 

int main(){
	string s;
	cin >> s;
	for(int i = 0;i < s.size();i++){
		if(s[i] == 'S') b[0] ++;
		else if(s[i] == 'Y') b[1] ++;
		else if(s[i] == 'C') b[2] ++;
		else if(s[i] == 'M') b[3] ++;
		else if(s[i] == 'a') b[4] ++;
		else if(s[i] == 's') b[5] ++;
	}
	int max_ = -1000;
	for(int i = 0;i < 6;i++) max_ = max(max_,b[i]);
	while(max_ > 0){
		if(b[0]) cout << 'S',b[0] --;
		if(b[1]) cout << 'Y',b[1] --;
		if(b[2]) cout << 'C',b[2] --;
		if(b[3]) cout << 'M',b[3] --;
		if(b[4]) cout << 'a',b[4] --;
		if(b[5]) cout << 's',b[5] --;
		max_ = -1000;
		for(int i = 0;i < 6;i++) max_ = max(max_,b[i]);
	}

	return 0;
}

