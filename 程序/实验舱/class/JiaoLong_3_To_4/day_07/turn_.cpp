#include<bits/stdc++.h>
using namespace std;

int a[502][502] = {0};

void cz(int n,int m){
	for(int i = 0;i < n;i++){
		int tem = a[i][m - 1];
		for(int j = 0;j < m - 1;j++){
			a[i][j + 1] = a[i][j];
		}
		a[i][0] = tem;
	}
	for(int i = 0;i < n;i++){
		swap(a[(i + 1) % n][0],a[i][n - 1]);
	}
	swap(a[0][0],a[n - 1][m - 1]);
}

int main(){
	long long n,m,k;
	cin >> n >> m >> k;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0;i < k;i++){
		cz(n,m);
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

