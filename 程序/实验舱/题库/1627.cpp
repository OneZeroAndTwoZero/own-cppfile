#include<bits/stdc++.h>
using namespace std;

int main(){
	char a;
	int n;
	cin >> a >> n;
	for(int j = 1;j < n;j ++){
		cout << " ";
	}
	cout << a << endl;
	for(int i = 1;i < n - 1;i ++){
		for(int j = 1;j < n - i;j ++){
			cout << " ";
		}
		cout << a;
		for(int j = 0;j < (i - 1) * 2 + 1;j++){
			cout << " ";
		}
		cout << a << endl;
	}
	for(int i = 0;i < 2 * n - 1;i++){
		cout << a;
	}
	cout << endl;

	return 0;
}

