#include<bits/stdc++.h>
using namespace std;

int fx[8][2] = {{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1}};
int a[9][9] = {0};
int b[9][9] = {0};

int main(){
	int m,n;
	cin >> m >> n;
	a[4][4] = m;
	for(int k = 0;k < n;k++){
		for(int i = 1;i < 8;i++){
			for(int j = 1;j < 8;j++){
				for(int t = 0;t < 8;t++){
					b[i + fx[t][0]][j + fx[t][1]] += a[i][j];
				}
				b[i][j] += a[i][j] * 2;
			}
		}
		for(int i = 0;i < 9;i++){
			for(int j = 0;j < 9;j ++){
				a[i][j] = b[i][j];
				b[i][j] = 0;
			}
		}
	}
	for(int i = 0;i < 9;i++){
		for(int j = 0;j < 9;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

