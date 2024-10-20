#include<bits/stdc++.h>
using namespace std;

bool zhu[505][505] = {0},zuo[505][505] = {0},fu[505][505] = {0};

int main(){
	int x,y,z,n;
	cin >> x >> y >> z >> n;
	for(int i = 0;i < n;i++){
		int xi,yi,zi;
		cin >> xi >> yi >> zi;
		zhu[y - yi][xi - 1] = 1;
		zuo[y - yi][zi - 1] = 1;
		fu[zi - 1][xi - 1] = 1;
	}
	for(int i = 0;i < y;i++){
		for(int j = 0;j < x;j++){
			if(zhu[i][j] == 1){
				cout << 'x';
			}else{
				cout << '.';
			}
		}
		cout << ' ';
		for(int j = 0;j < z;j++){
			if(zuo[i][j] == 1){
				cout << 'x';
			}else{
				cout << '.';
			}
		}
		cout << endl;
	}
	cout << endl;
	for(int i = 0;i < z;i++){
		for(int j = 0;j < x;j++){
			if(fu[i][j] == 1){
				cout << 'x';
			}else{
				cout << '.';
			}
		}
		cout << endl;
	}

	return 0;
}

