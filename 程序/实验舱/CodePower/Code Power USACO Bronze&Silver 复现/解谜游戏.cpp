#include<bits/stdc++.h>
using namespace std;

char a[3][3];
char check[3][3];
int b[128] = {0};

int main(){
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < 3;j++){
			cin >> a[i][j];
			b[a[i][j]] ++;
		}
	}
	int g = 0,y = 0;
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < 3;j++){
			cin >> check[i][j];
			if(check[i][j] == a[i][j]){
				g ++;
				b[a[i][j]] --;
				check[i][j] = '.';
			}
		}
	}
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < 3;j++){
			if(b[check[i][j]] != 0){
				y ++;
				b[check[i][j]] --;
			}
		}
	}
	cout << g << endl << y << endl;

	return 0;
}

