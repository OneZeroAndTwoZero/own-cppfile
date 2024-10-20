#include<bits/stdc++.h>
using namespace std;

string s1,s2;

int main(){
//#ifndef ONLINE_JUDGE
//    freopen("data.in","r",stdin);
//    freopen("data.out","w",stdout);
//#endif

	cin >> s1 >> s2;
	if(s2.find(s1) != s2.npos){
		cout << s1 << " is substring of " << s2 << "\n";
	}else if(s1.find(s2) != s1.npos){
		cout << s2 << " is substring of " << s1 << "\n";
	}else{
		cout << "No substring\n";
	}

	return 0;
}

