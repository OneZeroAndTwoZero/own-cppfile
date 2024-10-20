#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int k = 0;k < 2;k++){
		for(int i = 0;i < 2 * n - 1;i++){
			cout << "*";
		}
		cout << endl;
		for(int j = 0;j < n - 1;j++){	
		    cout <<"*";
			for(int i = 0;i < 2 * n - 2;i++){
				cout << " ";
			}
			cout << "*" << endl;
		}
	}
	for(int i = 0;i < 2 * n - 1;i++){
		cout << "*";
	}

	return 0;
}

