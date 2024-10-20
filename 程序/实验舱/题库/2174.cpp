#include<bits/stdc++.h>
using namespace std;

int a[105][105] = {0};

int main(){
	int gs = 0;
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	for(int i = 1;i < n - 1;i++){
		for(int j = 1;j < m - 1;j++){
			if(a[i][j] > a[i - 1][j] && a[i][j] > a[i + 1][j] && a[i][j] > a[i][j - 1] && a[i][j] > a[i][j + 1]){
				gs ++;
				cout << a[i][j] << " " << i + 1 << " " << j + 1 << endl;
			}
		}
	}
	if(!gs){
		cout << "None " << n << " " << m << endl;
	}

	return 0;
}

