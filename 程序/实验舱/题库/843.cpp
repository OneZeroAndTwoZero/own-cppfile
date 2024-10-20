#include<bits/stdc++.h>
using namespace std;

int a[105][105] = {0},b[105][105] = {0},ans[105][105] = {0};

int main(){
	int n,m,p;
	cin >> n >> m >> p;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0;i < m;i++){
		for(int j = 0;j < p;j++){
			cin >> b[i][j];
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < p;j++){
			for(int k = 0;k < m;k++){
				ans[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < p;j++){
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

