#include<bits/stdc++.h>
using namespace std;

int main(){
	//可能会换行 
    string s;
    getline(cin,s);
    for(int i = 0;i < s.size();i++){
    	if(s[i] >= 'a' && s[i] <= 'z'){
    		cout << s[i];
		}
	}

	return 0;
}

