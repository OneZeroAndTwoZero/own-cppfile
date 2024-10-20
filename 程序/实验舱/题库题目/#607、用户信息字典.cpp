#include<bits/stdc++.h>
using namespace std;

int n,x;
string s;

int main(){
	cout << "{";
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> s >> x;
		if(i != 0) cout << ", ";
		cout << "'" << s << "': '" << x << "'";
	}
	cout << "}\n";

	return 0;
}

