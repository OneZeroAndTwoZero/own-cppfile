#include<bits/stdc++.h>
using namespace std;

long long ans[2005];

void js(string s1,string s2){
	if(s1 == "0" || s2 == "0"){
		cout << "0" << endl;
		return;
	}
	reverse(s1.begin(),s1.end());
	reverse(s2.begin(),s2.end());
	for(int i = 0;i < s1.size();i++){
		for(int j = 0;j < s2.size();j++){
			ans[i + j] += (s1[i] - '0') * (s2[j] - '0');
		}
	}
	for(int i = 0;i < 2004;i++){
		ans[i + 1] += ans[i] / 10;
		ans[i] %= 10;
	}
	bool ok = 1;
	for(int i = 2004;i >= 0;i--){
		if(ans[i] == 0 && ok){
			continue;
		}
		ok = 0;
		cout << ans[i];
	}
	cout << endl;
}

int main(){
	string s1,s2;
	cin >> s1 >> s2;
	js(s1,s2);

	return 0;
}

