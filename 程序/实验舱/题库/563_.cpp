#include<bits/stdc++.h>
using namespace std;

int a[105][105] = {0};
int ans[105][105] = {0};
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

void re(int r,int c){
	for(int i = 0;i < r;i++){
		for(int j = 0;j < c;j++){
			a[i][j] = ans[i][j];
			ans[i][j] = 0;
		}
	}
}

void cz(int r,int c){
	for(int i = 0;i < r;i++){
		for(int j = 0;j < c;j++){
			bool p = 0;
			for(int k = 0;k < 4;k++){
				if((i + dir[k][0]) >= 0 && (i + dir[k][0]) < r && (j + dir[k][1]) >= 0 && (j + dir[k][1]) < c){
					int cha = a[i + dir[k][0]][j + dir[k][1]] - a[i][j];
					if(cha == 1 || cha == -2){
						p = 1;
						ans[i][j] = a[i + dir[k][0]][j + dir[k][1]];
					}
			    }
			}
			if(!p){
				ans[i][j] = a[i][j];
			}
		}
	}
	re(r,c);
}

int main(){
	int r,c;
	int n;
	cin >> r >> c;
	cin >> n;
	for(int i = 0;i < r;i++){
		for(int j = 0;j < c;j++){
			char t;
			cin >> t;
			if(t == 'R'){
				a[i][j] = 3;
			}else if(t == 'S'){
				a[i][j] = 2;
			}else{
				a[i][j] = 1;
			}
		}
	}
	for(int i = 0;i < n;i++){
		cz(r,c);
	}
	for(int i = 0;i < r;i++){
		for(int j = 0;j < c;j++){
			if(a[i][j] == 1){
				cout << 'P';
			}else if(a[i][j] == 2){
				cout << 'S';
			}else{
				cout << 'R';
			}
		}
		cout << endl;
	}

	return 0;
}

