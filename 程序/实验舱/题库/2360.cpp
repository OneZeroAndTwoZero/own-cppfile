#include<bits/stdc++.h>
using namespace std;

int a[1005][1005] = {0};

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	long long zd = -1;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			int ti = i,tj = j;
			long long now = 0;
			while(ti < n && tj < m){
				if(ti != i){
					if(a[ti][tj] <= a[ti - 1][tj]){
						break;
					}
				}
				now += a[ti][tj];
				ti ++;
			}
			zd = max(now,zd);
			ti = i,tj = j;
			now = 0;
			while(ti < n && tj < m){
				if(tj != j){
					if(a[ti][tj] <= a[ti][tj - 1]){
						break;
					}
				}
				now += a[ti][tj];
				tj ++;
			}
			zd = max(now,zd);
		}
	}
	cout << zd << endl;

	return 0;
}

