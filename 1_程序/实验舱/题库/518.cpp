#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = n;i >= 0;i--){
		for(int j = n - i;j >= 0;j--){
			int f = i * 8 - 5 * j;
			if(f == m && (n - i - j) >= 0){
				cout << i << " " << j << " " << n - i - j << endl;
				break;
			}
		}
	}

	return 0;
}

