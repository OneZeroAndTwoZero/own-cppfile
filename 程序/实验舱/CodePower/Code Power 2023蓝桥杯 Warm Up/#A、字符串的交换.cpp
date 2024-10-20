#include<bits/stdc++.h>
using namespace std;

string s;
int n;

int main(){
	cin >> s;
	n = s.size() / 2;
	for(int i = 1;i <= n;i ++){
		swap(s[2 * i - 2],s[2 * i - 1]);
	}
	cout << s << endl;

	return 0;
}

