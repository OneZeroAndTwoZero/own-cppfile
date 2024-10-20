#include<bits/stdc++.h>
using namespace std;
int a[101][101] = {0};

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	int x,y;
	cin >> x >> y;
	x--,y--;
	int max = -114514;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			if(i == x || j == y || i - j == x - y || i + j == x + y){
				if(a[i][j] > max){
					max = a[i][j];
				}
			}
		}
	}
	cout << max << endl;

	return 0;
}

