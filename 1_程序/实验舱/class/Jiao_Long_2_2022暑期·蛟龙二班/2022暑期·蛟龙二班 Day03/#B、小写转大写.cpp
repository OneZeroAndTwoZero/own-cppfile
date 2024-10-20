#include<bits/stdc++.h>
using namespace std;

char ch;

int main(){
	while(~scanf("%c",&ch)){
		if((int)ch >= 97 && (int)ch <= 122){
			ch -= 'a';
			ch += 'A';
		}
		cout << ch;
	}
	
	return 0;
}
