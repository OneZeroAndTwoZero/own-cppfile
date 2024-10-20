#include<bits/stdc++.h>
using namespace std;

int a[105][105] = {0};
int k = 1;

void tc(int hls,bool fx){
	if(fx == 1){
		int x = hls,y = 0;
		while(y <= hls){
			a[x][y] = k++;
			y++;
		}
		y--;
		x--;
		while(x >= 0){
			a[x][y] = k++;
			x--;
		}
	}else if(fx == 0){
		int x = 0,y = hls;
		while(x <= hls){
			a[x][y] = k++;
			x++;
		}
		x--;
		y--;
		while(y >= 0){
			a[x][y] = k++;
			y--;
		}
	}
}

int main(){
	int n;
	cin >> n;
	int fx = 1;
	for(int i = 0;i < n;i++){
		tc(i,fx);
		fx ++;
		fx = fx % 2;
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}


