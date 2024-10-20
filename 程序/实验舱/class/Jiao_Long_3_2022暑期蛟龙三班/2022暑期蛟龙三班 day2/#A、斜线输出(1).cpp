#include<bits/stdc++.h>
using namespace std;

int n;
int a[21][21] = {0};

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cin >> a[i][j];
		}
	}
	for(int k = n - 1;k > -n;k--){
		for(int i = 0;i < n;i++){
			int j = k + i;
			if(j >= 0&& j < n) cout << a[j][i] << " ";
		}
	}

	return 0;
}

