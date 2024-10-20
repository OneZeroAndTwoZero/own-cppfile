#include<bits/stdc++.h>
using namespace std;

int main(){
	char max = ' ';
	string s;
	cin >> s;
	for(int i = 0;i < s.size();i++){
		if(s[i] > max) max = s[i];
	}
	if(max < '2') cout << "二进制" << endl;
	else if(max < '8') cout << "八进制" << endl;
	else if(max <= '9') cout << "十进制" << endl;
	else cout << "十六进制" << endl;

	return 0;
}

