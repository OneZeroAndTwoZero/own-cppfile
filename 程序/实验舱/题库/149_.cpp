#include<bits/stdc++.h>
using namespace std;

int main(){
    char c;
    while(1){
    	cin >> c;
    	if(c == '*') return 0;
    	if(c >= 'a' && c <= 'z'){
    		cout << c;
		}
	}

	return 0;
}

