#include<bits/stdc++.h>
using namespace std;

string s = "123456789";

int main(){
//#ifndef ONLINE_JUDGE
//    freopen("data.in","r",stdin);
//    freopen("data.out","w",stdout);
//#endif

	string a = s.substr(1,2);
	s.insert(1,"000");
	cout << s << endl;

	return 0;
}

