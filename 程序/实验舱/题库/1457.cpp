#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	n /= 3;
	for(int i = 0;i < n;i ++){
		for(int j = 0;j < 3;j++){
			for(int k = 0;k < 3 * n;k++){
				cout << (k / 3 + 1) + n * ((i * 3 + j) / 3);
			}
			cout << endl;
		}
	}

	return 0;
}

