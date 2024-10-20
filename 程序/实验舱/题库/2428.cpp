#include<bits/stdc++.h>
using namespace std;

int a[105][105] = {0};

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		for(int j = 0;j <= i;j++){
			if(j == 0 || j == n - 1) a[i][j] = 1;
			else a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	}
	for(int i = n - 1;i >= 0;i--){
		for(int j = 0;j < (n - i - 1);j ++){
			cout << " ";
		}
		for(int j = 0;j <= i;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

