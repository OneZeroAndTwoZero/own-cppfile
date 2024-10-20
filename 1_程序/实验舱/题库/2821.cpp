#include<bits/stdc++.h>
using namespace std;

char a[12][12];

int main(){
	int n,m,k;
	cin >> n >> m >> k;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0;i < n;i++){
		for(int g = 0;g < k;g++){
			for(int j = 0;j < k * m;j++){
				cout << a[i][j / k];
			}
			cout << endl;
		}
	}

	return 0;
}

