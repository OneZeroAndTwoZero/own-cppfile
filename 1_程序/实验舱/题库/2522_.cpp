#include<bits/stdc++.h>
using namespace std;

int a[1005][1005] = {0};

int main(){
	int n;
	cin >> n;
	a[n / 2][n / 2] = 1;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			a[i][j] = abs(i - n / 2) + abs(j - n / 2) + 1;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

