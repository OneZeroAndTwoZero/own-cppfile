#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	cout << '+';
	for(int i = 0;i < m;i++){
		cout << "-+";
	}
	cout << endl;
	for(int i = 0;i < n;i++){
		cout << '|';
		for(int i = 0;i < m;i++){
			cout << "*|";
		}
		cout << endl;
		cout << '+';
		for(int i = 0;i < m;i++){
			cout << "-+";
		}
		cout << endl;
	}

	return 0;
}

