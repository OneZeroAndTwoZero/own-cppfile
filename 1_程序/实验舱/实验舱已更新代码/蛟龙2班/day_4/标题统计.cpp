#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int zfs = 0;
    for(int i = 0;i < s.size();i++){
    	char c = s[i];
    	if(c >= 'a' && c <= 'z'){
    		zfs ++;
		}else if(c >= 'A' && c <= 'Z'){
			zfs ++;
		}else if(c >= '0' && c <= '9'){
			zfs ++;
		}
	}
	cout << zfs << endl;
} 
