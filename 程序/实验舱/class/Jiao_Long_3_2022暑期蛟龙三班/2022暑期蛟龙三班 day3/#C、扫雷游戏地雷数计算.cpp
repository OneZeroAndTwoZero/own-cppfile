#include<bits/stdc++.h>
using namespace std;

int n,m;
int dir[8][2] = {{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1}};
char a[102][102] = {0};

int cz(int x,int y){
	int sum = 0;
	for(int i = 0;i < 8;i++){
		int dx = x + dir[i][0];
		int dy = y + dir[i][1];
		if(a[dx][dy] == '*') sum ++;
	}
	return sum;
}

int main(){
	cin >> n >> m;
	getchar();
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			a[i][j] = getchar();
		}
		getchar();
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			if(a[i][j] != '*'){
				a[i][j] = (char)(cz(i,j) + '0');
			}
			cout << a[i][j];
		}
		cout << endl;
	}

	return 0;
}

