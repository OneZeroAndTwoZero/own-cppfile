#include<bits/stdc++.h>
using namespace std;

string cz(int a){
	string ans = "";
	while(a){
		int s = (a - 1) % 26 + 1;
		ans = (char)('A' - 1 + s) + ans;
		a = (a - 1) / 26;
	}
	return ans;
}

int main(){
	int n;
	cin >> n;
	cout << cz(n) << endl;

	return 0;
}

