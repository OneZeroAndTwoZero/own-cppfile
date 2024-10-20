#include<bits/stdc++.h>
using namespace std;

string s;
int ans = 0;
bool r = 0;

int main(){
	cin >> s;
	int n = s.size();
	for(int i = 0;i < n;i++){
		if(s[i] == '*'){
			if(!r) ans ++;
		}else if(s[i] == '|'){
			r = !r;
		}
	}
	cout << ans << endl;

	return 0;
}

