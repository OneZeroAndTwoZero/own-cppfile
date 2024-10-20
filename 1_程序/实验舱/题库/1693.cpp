#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = n;i >= 1;i--){
		cout << "**";
		for(int j = i;j >= 1;j--){
			cout << " ";
		}
		for(int j = i;j >= 1;j--){
			cout << "*";
		}
		cout << endl;
	}
	cout << "***" << endl;
	for(int i = 1;i <= n;i++){
		cout << "**";
		for(int j = 1;j <= i;j++){
			cout << " ";
		}
		for(int j = 1;j <= i;j++){
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}

