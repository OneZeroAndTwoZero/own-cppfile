#include<bits/stdc++.h>
using namespace std;

bool a[1005][1005] = {0};
int dir[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};

int zhao(int i,int j,int n,int m){
	int ll_max = min({i + 1,n - i,j + 1,m - j});
	int ans = 0;
	for(int k = 0;k < ll_max;k++){
		for(int c = 0;c < 4;c++){
			if(!a[i + dir[c][0] * k][j + dir[c][1] * k]){
				return ans;
			}
		}
		ans ++;
	}
	return ans;
}

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	int max_ = -1;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			max_ = max(zhao(i,j,n,m),max_);
		}
	}
	cout << max_ << endl;

	return 0;
}

