#include<bits/stdc++.h>
using namespace std;

int a[205][205] = {0};
int b[205][205] = {0};

int main(){
	int n,m,k;
	cin >> n >> m >> k;
	k %= 4;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0;i < k;i++){
		swap(n,m);
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				b[j][n - i - 1] = a[i][j];
			}
		}
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				a[i][j] = b[i][j];
			}
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

