#include<bits/stdc++.h>
using namespace std;

bool a[505][505] = {0};
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

int main(){
	int n,m;
	cin >> n >> m;
	int gs = 0;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			if(!a[i][j]){
				for(int k = 0;k < 4;k ++){
					int si = i,sj = j;
					while(si >= 0 && si < n && sj >= 0 && sj < m){
						if(a[si][sj] == 1){
							gs ++;
							break;
						}
						si += dir[k][0];
						sj += dir[k][1];
					}
				}
			}
		}
	}
	cout << gs << endl;

	return 0;
}

