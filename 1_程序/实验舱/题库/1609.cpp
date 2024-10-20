#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int k;
	cin >> k;
	cin >> s;
	for(int i = 0;i < s.size();i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			s[i] = ((s[i] - 'a') + k) % 26 + 'a';
		}
	}
	cout << s << endl;
	

	return 0;
}

