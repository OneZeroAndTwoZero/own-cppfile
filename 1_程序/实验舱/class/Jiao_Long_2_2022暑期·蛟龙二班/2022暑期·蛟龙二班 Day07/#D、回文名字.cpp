#include<bits/stdc++.h>
using namespace std;

string s;
int n;
	
bool ok(string s){
	int f = 0,e = s.size() - 1;
	for(f = 0;f <= e;f++,e--){
		if(s[e] != s[f]){
			return 0;
		}
	}
	return 1;
}

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> s;
		cout << ok(s) << endl;
	}
	
	
	return 0;
} 
