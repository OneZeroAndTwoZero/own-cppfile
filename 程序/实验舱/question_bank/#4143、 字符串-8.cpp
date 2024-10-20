#include<bits/stdc++.h>
using namespace std;

string A, B;

string operate(string &s, int typ){
	string res = "";
	for (auto && i : s){
		if (isdigit(i)) continue;
		if (i == ' '){
			res.push_back(' ');
			continue;
		}
		int ty = (i >= 'A' && i <= 'Z') ? 1 : 2;
		if (ty != typ) i = i + 32 * (ty == 1 ? 1 : -1);
		res.push_back(i);
	}
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	getline(cin, A);
	getline(cin, B);
	cout << operate(A, (A.size() > B.size() ? 2 : 1)) << "\n";
	cout << operate(B, (A.size() > B.size() ? 1 : 2)) << "\n";

	return 0;
}
