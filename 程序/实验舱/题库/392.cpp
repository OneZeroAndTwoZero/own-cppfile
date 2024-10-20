#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int c[10] = {0,1,2,3,4,5,6,7,8,9};
	int now = 0;
	cin >> n;
	for(int i = n - 1;i >= 0;i--){
		for(int j = 1;j <= i;j++) cout << ' ';
		for(int j = 0;j < (n - i) * 2 - 1;j++){
			cout << c[now];
			now = (now + 1) % 10;
		}
		cout << endl;
	}

	return 0;
}

