#include<bits/stdc++.h>
using namespace std;

int fx[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
bool a[105][105] = {0};

int main(){
	int n;
	cin >> n;
	int s = 0,c = 0;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			int tem;
			cin >> tem;
			if(tem <= 50) a[i][j] = 1,s ++;
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			if(a[i][j]){
				if(i == 0 || i == n - 1 || j == 0 || j == n - 1){
					c ++;
					continue;
				}
				for(int k = 0;k < 4;k++){
					if(!a[i + fx[k][0]][j + fx[k][1]]){
						c ++;
						break;
					}
				}
			}
		}
	}
	cout << s << " " << c << endl;

	return 0;
}

