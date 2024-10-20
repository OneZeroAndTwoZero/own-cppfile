#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int yi = 0;
	for(int i = 0;i < s.size();i++){
		if(s[i] == '1') yi ++;
	}
	cout << yi << endl;

	return 0;
}

