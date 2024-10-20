#include<bits/stdc++.h>
using namespace std;

int fan(string s){
	int i = 0;
	while(1){
		int g = 0;
		char a[501] = {};
		while(s[i] != 32){
			a[g] = s[i]; 
			i++;
			g++;
			if(i >= s.size()){
				break;
			}
	    }
		for(int j = g - 1;j >= 0;j--){
			cout << a[j];
		}
		i++;
		cout << " ";
		if(i >= s.size()){
			return 0;
		}
    }
}

int main(){
	string s;
	getline(cin,s);
	fan(s);
	
	return 0;
}
