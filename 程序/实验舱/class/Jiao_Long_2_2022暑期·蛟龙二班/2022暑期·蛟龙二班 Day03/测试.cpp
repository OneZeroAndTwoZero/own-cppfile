#include<bits/stdc++.h>
using namespace std;

char family(char a,char b){
	char ans = (char)(a + b);
	return ans;
} 

int main(){
	string s;
	getline(cin,s);
	int n = s.size();
	for(int i = 0;i < n;i++){
		cout << family(s[i],s[(i + 1) % n]);
	}
	
	return 0;
}  
