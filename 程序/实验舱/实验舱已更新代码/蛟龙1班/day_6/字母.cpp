#include<bits/stdc++.h>
using namespace std;

int main(){
	int out1 = 65;
	int out2 = 97;
	int out3 = 48;
	for(int i = 0;i < 26;i++){
		char ch;
		ch = (char)out1;
		cout << ch;
		out1++;
	}
	cout << "\n";
	for(int i = 0;i < 26;i++){
		char ch;
		ch = (char)out2;
		cout << ch;
		out2++;
	}
	cout << "\n";
	for(int i = 0;i < 10;i++){
		char ch;
		ch = (char)out3;
		cout << ch;
		out3++;
	}
	
	return 0;
} 
