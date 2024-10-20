#include<bits/stdc++.h>
using namespace std;

string s = {"©°©Ð©´©À©à©È©¸©Ø©¼©¦©¤"};

int main(){
	int n,m;
	cin >> n >> m;
	cout << s[0];
	for(int i = 0;i < m - 1;i++){
		cout << s[10] << s[1];
	}
	cout << s[10] << s[2] << endl;
	for(int i = 1;i < n - 1;i ++){
		for(int j = 0;j <= n;j++){
			cout << s[9] << " ";
		}
		cout << s[3];
		for(int j = 0;j < m - 1;j ++){
			cout << s[10] << s[4];
		}
		cout << s[10] << s[5] << endl;
	}
	for(int i = 0;i <= n;i++){
		cout << s[9] << " ";
	}
	cout << s[6];
	for(int i = 0;i < m - 1;i ++){
		cout << s[10] << s[7];
	}
	cout << s[10] << s[8] << endl;

	return 0;
}

