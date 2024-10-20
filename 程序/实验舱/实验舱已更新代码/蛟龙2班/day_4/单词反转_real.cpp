#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	int i = 0;
	while(i < s.size()){
		char a[500] = {};
	    int g = 0;
		while(i < s.size() && s[i] != ' '){
	        a[g] = s[i];
	        i++;
	        g++;
		}
		for(int j = g - 1;j >= 0;j--){
			cout << a[j];
		}
		i++;
		cout << " ";
    }
	
	return 0;
}
