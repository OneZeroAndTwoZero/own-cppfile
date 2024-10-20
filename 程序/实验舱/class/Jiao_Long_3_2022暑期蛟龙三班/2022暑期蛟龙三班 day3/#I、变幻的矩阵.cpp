#include<bits/stdc++.h>
using namespace std;

int n;
int a[11][11] = {0};
int b[11][11] = {0};

int cz(int n){
	bool o1 = 1,o2 = 1,o3 = 1,o4 = 1;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			if(!(a[i][j] == b[j][n - i - 1])){
				o1 = 0;
				break;
			}
		}
		if(!o1) break;
	}
	if(o1) return 1;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			if(!(a[i][j] == b[n - j - 1][i])){
				o2 = 0;
				break;
			}
		}
		if(!o2) break;
	}
	if(o2) return 2;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			if(!(a[i][j] == b[n - i - 1][n - j - 1])){
				o3 = 0;
				break;
			}
		}
		if(!o3) break;
	}
	if(o3) return 3;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			if(!(a[i][j] == b[i][j])){
				o4 = 0;
				break;
			}
		}
		if(!o4) break;
	}
	if(o4) return 4;
	return 5;
}

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cin >> b[i][j];
		}
	}
	cout << cz(n) << endl;

	return 0;
}

