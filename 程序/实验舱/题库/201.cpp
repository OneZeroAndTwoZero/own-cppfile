#include<bits/stdc++.h>
using namespace std;

string MyStrcat(string a,string b){
	for(int i = 0;i < b.size();i++){
		a += b[i];
	}
	return a;
}

int main(){
	string s,a,b;
	cin >> a >> b;
	s = MyStrcat(a,b);
	cout << s << endl;

	return 0;
}


