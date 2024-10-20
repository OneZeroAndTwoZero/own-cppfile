#include<bits/stdc++.h>
using namespace std;

int a[5][5] = {0};

bool xiao(int j,int x){
	int right = min({a[0][j],a[1][j],a[2][j],a[3][j],a[4][j]});
	if(x == right) return 1;
	return 0;
}

int main(){
	bool y = 0;
	for(int i = 0;i < 5;i++){
		for(int j = 0;j < 5;j ++){
			cin >> a[i][j];
		}
	}
	for(int i = 0;i < 5;i++){
		int da = max({a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]});
		for(int j = 0;j < 5;j++){
			if(a[i][j] == da){
				y = xiao(j,da);
				if(y){
					cout << i + 1 << " " << j + 1 << " " << da;
					return 0;
				}
			}
		}
	}
	cout << "not found\n";

	return 0;
}

