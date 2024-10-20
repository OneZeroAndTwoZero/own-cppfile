#include<bits/stdc++.h>
using namespace std;

int a[1002][1002] = {0};

void one(int i,int j,int k){
	a[i][j] = k;
}

void two(int i,int j,int n){
	for(int k = 1;k <= n;k++){
		swap(a[i][k],a[j][k]);
	}
}

void three(int i,int j,int n){
	for(int k = 1;k <= n;k++){
		swap(a[k][i],a[k][j]);
	}
}

void four(int n){
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int main(){
	int n,q;
	cin >> n >> q;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			cin >> a[i][j];
		}
	}
	for(int i = 1;i <= q;i++){
		int cz;
		cin >> cz;
		if(cz == 1){
			int i,j,k;
			cin >> i >> j >> k;
			one(i,j,k);
		}else if(cz == 2){
			int i,j;
			cin >> i >> j;
			two(i,j,n);
		}else if(cz == 3){
			int i,j;
			cin >> i >> j;
			three(i,j,n);
		}else if(cz == 4){
			four(n);
		}
	}

	return 0;
}

