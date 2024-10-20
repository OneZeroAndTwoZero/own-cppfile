#include<bits/stdc++.h>
using namespace std;

int a[1005][1005];
int b[1005][1005];
int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

int main(){
	int n;
	cin >> n;
	int k = 1;
	a[n / 2][n / 2] = 1,b[n / 2][n / 2] = 1;
	for(k = 2;k <= 2 * n;k++){
		for(int i = 0;i < n;i++){
			for(int j = 0;j < n;j++){
			    if(a[i][j] != 0){
			    	for(int f = 0;f < 4;f ++){
			    		if(b[i + dir[f][0]][j + dir[f][1]] == 0 && (i + dir[f][0]) >= 0 && (i + dir[f][0]) < n && (j + dir[f][1]) >= 0 && (j + dir[f][1]) < n){
			    			b[i + dir[f][0]][j + dir[f][1]] = k;
						}
					}
				}
			}
		}
		for(int i = 0;i < n;i++){
			for(int j = 0;j < n;j++){
				a[i][j] = b[i][j];
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

