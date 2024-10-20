#include<iostream>
using namespace std;

char ch;

int main(){
	cin >> ch;
	if(ch >= 'a' && ch <= 'z'){
		cout << (char)(ch - 32);
	}
	if(ch >= 'A' && ch <= 'Z'){
		cout << (char)(ch + 32);
	}
	
	return 0;
} 
