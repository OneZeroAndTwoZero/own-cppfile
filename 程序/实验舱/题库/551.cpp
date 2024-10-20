#include<bits/stdc++.h>
using namespace std;

int a[105][105] = {0};

int main(){
	int n;
	cin >> n;
	int cnt = 1;
	for(int k = 0;k < 2 * n - 1;k ++){
		if(k % 2 == 1){
			for(int i = 0;i < n;i++){
				int j = k - i;
				if(j >= 0 && j < n){
					a[i][j] = cnt ++;
				}
			}
		}else{
			for(int i = n - 1;i >= 0;i--){
				int j = k - i;
				if(j >= 0 && j < n){
					a[i][j] = cnt ++;
				}
			}
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

