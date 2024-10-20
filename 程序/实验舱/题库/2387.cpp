#include<bits/stdc++.h>
using namespace std;

int a[105][105] = {0};
int dir[8][2] = {{0,1},{0,-1},{1,0},{-1,0},{1,1},{1,-1},{-1,-1},{-1,1}};

void cz(int i,int j,int n,int m){
	a[i][j] = 2;
	for(int k = 0;k < 8;k++){
		int si = i + dir[k][0],sj = j + dir[k][1];
		if(si >= 0 &&si < n && sj >= 0 && sj < m){
			if(a[si][sj] == 1){
				cz(si,sj,n,m);
			}
			a[si][sj] = 2;
		}
	}
}

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			char t;
			cin >> t;
			a[i][j] = t - '0';
		}
	}
	int si,sj;
	cin >> si >> sj;
	si --,sj --; 
	if(a[si][sj]) cz(si,sj,n,m);
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cout << a[i][j];
		}
		cout << endl;
	}

	return 0;
}

