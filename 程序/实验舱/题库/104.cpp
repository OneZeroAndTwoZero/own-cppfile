#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i <= n;i++){
		for(int j = 0;j <= n - i;j++){
			if(i * 8 + j * -5 == m && i + j <= n){
				cout << i << " " << j << " " << n - i - j << endl;
			}
		}
	}

	return 0;
}

