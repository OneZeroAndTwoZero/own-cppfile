#include<bits/stdc++.h>
using namespace std;

int a[105][105] = {0};

int main(){
	int n,k,x;
	cin >> n >> k >> x;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cin >> a[i][j];
		}
	}
	int no = 1;
	for(int i = 0;i < n;i++){
		if(i % 2 == 1){
			for(int j = 0;j < no;j++){
				for(int k = n - 1;k > 0;k--){
					a[k][i] = a[k - 1][i];
				}
				a[0][i] = x;
			}
			no = no % k + 1;
		}
	}
	for(int i = 0;i < n;i++){
		int sum = 0;
		for(int j = 0;j < n;j++){
			sum += a[i][j];
		}
		cout << sum << " ";
	}

	return 0;
}

