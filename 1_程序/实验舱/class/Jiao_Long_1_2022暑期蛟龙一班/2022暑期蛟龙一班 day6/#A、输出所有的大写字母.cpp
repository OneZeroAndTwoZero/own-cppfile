#include<bits/stdc++.h>
using namespace std;

int out1 = 65,out2 = 97,out3 = 48;
	
int main(){
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
