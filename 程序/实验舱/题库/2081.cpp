#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cout << "*";
	}
	cout << endl;
	for(int i = 0;i < n - 2;i++){
		for(int j = 0;j < n - i - 2;j++){
			cout << " ";
		}
		cout << "*";
		cout << endl;
	}
	for(int i = 0;i < n;i++){
		cout << "*";
	}
	cout << endl;

	return 0;
}

