#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int a[n][m] = {0};
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	} 
	for(int j = n - 1;j >= 0;j--){
		for(int i = 0;i < m;i++){
			cout << a[j][i] << " ";
		}
		cout << endl;
	}

	return 0;
}

