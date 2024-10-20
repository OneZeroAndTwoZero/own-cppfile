#include<bits/stdc++.h>
using namespace std;

int a[105][105] = {0};

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

