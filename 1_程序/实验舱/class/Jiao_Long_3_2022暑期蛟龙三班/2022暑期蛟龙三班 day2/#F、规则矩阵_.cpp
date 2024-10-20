#include<bits/stdc++.h>
using namespace std;

int a[1001][1001] = {0};

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	
	for(int i = -(m - 1);i <= n - 1;i++){
		bool o = 1;
		int bz;
		for(int k = 0;k < n;k++){
			int j = k - i;
			if(j >= 0 && j < m){
				if(o){
					bz = a[k][j];
					o = 0;
				}else{
					if(a[k][j] != bz){
						cout << 0 << endl;
						return 0;
					}
				}
			}
		}
	}
	cout << 1 << endl;

	return 0;
}

