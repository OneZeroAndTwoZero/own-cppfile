#include<bits/stdc++.h>
using namespace std;

string s;
char c;
int n;

int main(){
//#ifndef ONLINE_JUDGE
//    freopen("data.in","r",stdin);
//    freopen("data.out","w",stdout);
//#endif

	getline(cin,s);
	cin >> n >> c;
	for(int i = 0;i < n;i ++){
		if(i < s.size()) cout << s[i];
		else cout << c;
	}
	puts("");

	return 0;
}

