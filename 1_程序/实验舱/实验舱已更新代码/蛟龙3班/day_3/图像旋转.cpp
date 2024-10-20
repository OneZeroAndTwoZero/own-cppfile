#include<bits/stdc++.h>
using namespace std;

int a[101][101] = {0};
int b[101][101] = {0};

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a[i][j];
			b[j][n - i - 1] = a[i][j];
		}
	}
	for(int i = 0;i < m;i++){
		for(int j = 0;j < n;j++){
			cout << b[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

