#include<bits/stdc++.h>
using namespace std;

int n,m,a[5][5];

int main(){
	for(int i = 0;i < 5;i++){
		for(int j = 0;j < 5;j++){
			cin >> a[i][j];
		}
	}
	cin >> n >> m;
	for(int i = 0;i < 5;i++){
		int tem;
		if(i == n - 1) tem = m - 1;
		else if(i == m - 1) tem = n - 1;
		else tem = i;
		for(int j = 0;j < 5;j++){
			cout << a[tem][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

