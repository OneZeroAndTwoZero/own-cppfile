#include<bits/stdc++.h>
using namespace std;

int a[200][200] = {0};

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++) for(int j = 0;j < n;j++) cin >> a[i][j];
	for(int i = 0;i < 2 * n - 1;i++){
		for(int k = 0;k < n;k++){
			int j = i - k;
			if(j >= 0 && j < n) cout << a[k][j] << " ";
		}
	}
	
	return 0;
}

