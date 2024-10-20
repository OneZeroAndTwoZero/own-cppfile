#include<bits/stdc++.h>
using namespace std;

int a[505][505] = {0};

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cin >> a[i][j];
		}
	}
	int s = 0,x = n - 1,z = 0,y = n - 1;
	while(s <= x || z <= y){
		for(int i = z;i <= y;i++){
			cout << a[s][i] << " ";
		}
		s ++;
		for(int i = s;i <= x;i++){
			cout << a[i][y] << " ";
		}
		y --;
		for(int i = y;i >= z;i--){
			cout << a[x][i] << " ";
		}
		x --;
		for(int i = x;i >= s;i--){
			cout << a[i][z] << " ";
		}
		z ++;
	}

	return 0;
}

