#include<bits/stdc++.h>
using namespace std;

int a[505][505] = {0};

bool ok(int n){
	if(n == 2){
		return 1;
	}
	if(n < 2 || n % 2 == 0) return 0;
	for(int i = 2;i * i <= n;i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main(){
	int n;
	cin >> n;
	int s = 0,x = n - 1,z = 0,y = n - 1;
	int k = 1;
	while(s <= x || z <= y){
		for(int i = z;i <= y;i++){
			while(!ok(k)){
				k ++;
			}
			a[s][i] = k;
			k ++;
		}
		s ++;
		if(!(s <= x)) break;
		for(int i = s;i <= x;i++){
			while(!ok(k)){
				k ++;
			}
			a[i][y] = k;
			k ++;
		}
		y --;
		if(!(z <= y)) break;
		for(int i = y;i >= z;i--){
			while(!ok(k)){
				k ++;
			}
			a[x][i] = k;
			k ++;
		}
		x --;
		if(!(s <= x)) break;
		for(int i = x;i >= s;i--){
			while(!ok(k)){
				k ++;
			}
			a[i][z] = k;
			k ++;
		}
		z ++;
		if(!(z <= y)) break;
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

