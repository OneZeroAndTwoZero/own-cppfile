#include<bits/stdc++.h>
using namespace std;

int a[50][50] = {0};

int main(){
	int n;
	cin >> n;
	int i = 0,j = n - 1;
	n = 2 * n - 1;
	int k = 1;
	while(k <= n * n){
		a[i][j] = k;
		int i1 = i - 1 < 0 ? i + n - 1 : i - 1;
		int j1 = (j + 1) % n;
		if(a[i1][j1] != 0){
			i1 = (i + 1) % n;
			j1 = j;
		}
		i = i1,j = j1;
		k ++;
	}
	for(int x = 0;x < n;x++){
		for(int y = 0;y < n;y++){
			cout << a[x][y] << " ";
		}
		cout << endl;
	}

	return 0;
}

