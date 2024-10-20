#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int x = s.size();
	if(s[x-2] == 'e' && s[x-1] == 'r'){
		x -= 2;
	}else if(s[x - 2] == 'l' && s[x - 1] == 'y'){
		x -= 2;
	}else if(s[x - 3] == 'i' && s[x - 2] == 'n' && s[x - 1] == 'g'){
		x -= 3;
    }
    for(int i = 0;i < x;i++){
    	cout << s[i];
	}
	
	return 0;
}
