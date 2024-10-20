#include<bits/stdc++.h>
using namespace std;

int a[25][25] = {0};

void zero(int x,int y,int m){
	for(int i = 0;i < m;i++){
		swap(a[x][i],a[y][i]);
	}
}
void one(int x,int y,int n){
	for(int i = 0;i < n;i++){
		swap(a[i][x],a[i][y]);
	}
}

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	int t;
	cin >> t;
	for(int i = 0;i < t;i++){
		int k,x,y;
		cin >> k >> x >> y;
		if(k == 0){
			zero(x - 1,y - 1,m);
		}else{
			one(x - 1,y - 1,n);
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
} 
