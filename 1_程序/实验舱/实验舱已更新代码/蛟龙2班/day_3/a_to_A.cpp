#include<bits/stdc++.h>
using namespace std;

int main(){
	char ch;
	while(scanf("%c",&ch)!=EOF){
		if((int)ch >= 97 && (int)ch <= 122){
			ch -= 'a';
			ch += 'A';
		}
		cout << ch;
	}
	
	return 0;
}
