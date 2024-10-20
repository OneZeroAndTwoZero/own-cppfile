#include<bits/stdc++.h>
using namespace std;

bool ok(string a,string b){
	if(a == b) return 1;
	if(a.size() % 2 != 0 || b.size() % 2 != 0 || a.size() != b.size()) return 0;
	string a1 = a.substr(0,a.size()/2);
	string a2 = a.substr(a.size()/2,a.size()/2);
	string b1 = b.substr(0,b.size()/2);
	string b2 = b.substr(b.size()/2,b.size()/2);
	return ok(a1,b1) && ok(a2,b2) || ok(a1,b2) && ok(a2,b1);
}

int main(){
	int t;
	cin >> t;
	for(int i = 0;i < t;i++){
		string a,b;
		cin >> a >> b;
		if(ok(a,b)){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}

	return 0;
}

