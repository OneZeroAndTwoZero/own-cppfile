#include<bits/stdc++.h>
using namespace std;

string s;
int n;
char c;

int main(){
	getline(cin,s);
	cin >> n >> c;
	for(int i = 0;i < n;i++){
		if(s.size() >= i + 1){
			cout << s[i];
		}else{
			cout << c;
		}
	}

	return 0;
}


