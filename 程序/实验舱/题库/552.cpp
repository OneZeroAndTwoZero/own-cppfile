#include<bits/stdc++.h>
using namespace std;

int a[505][505] = {0};

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	int s = 0,x = n - 1,z = 0,y = m - 1;
	while(s <= x || z <= y){
		for(int i = z;i <= y;i++){
			cout << a[s][i] << endl;
		}
		s ++;
		if(!(s <= x)) break;
		for(int i = s;i <= x;i++){
			cout << a[i][y] << endl;
		}
		y --;
		if(!(z <= y)) break;
		for(int i = y;i >= z;i--){
			cout << a[x][i] << endl;
		}
		x --;
		if(!(s <= x)) break;
		for(int i = x;i >= s;i--){
			cout << a[i][z] << endl;
		}
		z ++;
		if(!(z <= y)) break;
	}

	return 0;
}

