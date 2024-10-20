#include<bits/stdc++.h>
using namespace std;

bool a[105][105] = {0};
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

void cz(int i,int j,int n,int m){
	a[i][j] = 0;
	for(int k = 0;k < 4;k++){
	    int si = i + dir[k][0],sj = j + dir[k][1];
	    if(si >= 0 && si < n && sj >= 0 && sj < m){
	    	if(a[si][sj] == 1){
	    		cz(si,sj,n,m);
			}
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
	int ans = 0;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			if(a[i][j]){
				ans ++;
				cz(i,j,n,m);
			}
		}
	}
	cout << ans << endl;

	return 0;
}

