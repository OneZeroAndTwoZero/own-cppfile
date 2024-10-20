#include<bits/stdc++.h>
using namespace std;

int main(){
	string s,t;
	cin >> s >> t;
	int pos = 0;
	int ans = 0;
	for(int i = 0;i < t.size();i++){
		if(pos >= s.size()) break;
		if(s.find(t[i],pos) != s.npos){
			pos = s.find(t[i],pos) + 1;
			ans ++;
		}else{
			break;
		}
	}
	cout << ans << endl;

	return 0;
}

