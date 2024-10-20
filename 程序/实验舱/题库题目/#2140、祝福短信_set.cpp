#include<bits/stdc++.h>
using namespace std;

int n,m;
string s;
set<string> fri;

string toa(){
	string res = "";
	for(int i = 0;i < s.size();i ++){
		if(s[i] >= 'a') res.push_back(s[i]);
		else res.push_back(s[i] - 'A' + 'a');
	}
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	cin >> n >> m;
	for(int i = 0;i < n;i ++){
		cin >> s;
		fri.insert(toa());
	}
	for(int i = 0;i < m;i ++){
		cin >> s;
		fri.erase(toa());
	}
	cout << fri.size() << endl;

	return 0;
}