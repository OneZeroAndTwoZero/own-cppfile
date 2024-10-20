#include<bits/stdc++.h>
using namespace std;

int a[502][502] = {0};
int b[502][502] = {0};

int main(){
	long long n,m,k;
	cin >> n >> m >> k;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	int xia = k / n;
	int you = k / m;
	bool huan = k >= m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			b[i][(j + you) % m] = a[i][j];
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			b[(i + xia) % n][j] = a[i][j];
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cout << b[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

