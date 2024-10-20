#include<bits/stdc++.h>
using namespace std;

int dir[8][2] = {{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1}};
int a[41][41] = {0}; 

int cz(int x,int y){
	int sum = 0;
	for(int i = 0;i < 8;i++){
		int dx = x + dir[i][0];
		int dy = y + dir[i][1];
		if(a[dx][dy] == -1) sum ++;
	}
	return sum;
}

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < m;i++){
		int dx,dy;
		cin >> dx >> dy;
		a[dx - 1][dy - 1] = -1;
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			if(a[i][j] != -1){
				a[i][j] = cz(i,j);
			}
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

