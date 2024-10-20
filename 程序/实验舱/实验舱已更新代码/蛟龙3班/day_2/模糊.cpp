#include<bits/stdc++.h>
using namespace std;

int dir[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
int a[101][101] = {0};

int sz(int x,int y){
	int sum = a[x][y];
	for(int i = 0;i < 4;i++){
		int dx = x + dir[i][0];
		int dy = y + dir[i][1];
		sum += a[dx][dy];
	}
	double avg = sum / 5.0;
	if(ceil(avg) - avg < 0.5) return ceil(avg);
	return floor(avg);
}

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			if(!(i == 0 || i == n - 1 || j == 0 || j == m - 1)){
				cout << sz(i,j) << " ";
			}else{
				cout << a[i][j] << " ";
			}
		}
		cout << endl;
	}

	return 0;
}

