#include<bits/stdc++.h>
using namespace std;

int a[205][205] = {0};
int ans[205][205] = {0};

void fz(){
	for(int i = 0;i < 201;i++){
		for(int j = 0;i < 201;j++){
			a[i][j] = ans[i][j];
			ans[i][j] = 0;
		}
	}
}

void cz(int n,int m){
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			ans[j][n - i - 1] = a[i][j];
		}
	}
	fz();
}

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
		cz(n,m);
	}
	if(k % 2 == 1) swap(n,m);
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

