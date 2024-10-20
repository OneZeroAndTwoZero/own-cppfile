#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;
string s;

int main(){
	cin >> n;
	cin >> s;
	for(int i = 1;i < s.size();i++){
		if(s[i] == s[i - 1]){
			s[i] = 'i';
			ans ++;
		}
	}
	cout << ans << endl;

	return 0;
}

