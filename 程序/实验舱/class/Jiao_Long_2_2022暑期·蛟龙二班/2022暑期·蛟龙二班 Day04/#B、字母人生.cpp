#include<bits/stdc++.h>
using namespace std;

string s;
int b[26] = {0};
    
int main(){
    getline(cin,s);
    for(int i = 0;i < s.size();i ++){
    	if(s[i] >= 'A' && s[i] <= 'Z'){
    		b[s[i] - 'A']++;
		}
	}
	int sum = 0;
	for(int i = 0;i < 26;i++){
		sum += b[i] * (i+1);
	}
	cout << sum << endl;
} 
