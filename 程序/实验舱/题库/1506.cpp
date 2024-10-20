#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	char c;
	cin >> n >> c;
	int h = ceil(0.5 * n);
	for(int i = 1;i <= h;i++){
		for(int i = 1;i <= n;i++){
			cout << c;
		}
		cout << endl;
	}

	return 0;
}

