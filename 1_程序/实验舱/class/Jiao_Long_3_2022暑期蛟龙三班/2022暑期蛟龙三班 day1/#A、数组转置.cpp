#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[1005][1005] = {0};

int main(){
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	} 
	for(int j = 0;j < m;j++){
		for(int i = 0;i < n;i++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

