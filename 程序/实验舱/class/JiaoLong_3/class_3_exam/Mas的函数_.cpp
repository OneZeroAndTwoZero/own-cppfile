#include<bits/stdc++.h>
using namespace std;

string s;

int main(){
	int t;
	cin >> t;
	for(int i = 0;i < t;i++){
		cin >> s;
		int ans = 1 + s.size() - 1;
		cout << ans << endl;
	}
	
	return 0;
} 
