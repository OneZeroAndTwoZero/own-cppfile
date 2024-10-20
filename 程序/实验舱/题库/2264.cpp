#include<bits/stdc++.h>
using namespace std;

char a[105][105] = {0};

int main(){
	int n,m,x,y,r;
	cin >> n >> m  >> x >> y >> r;
	x --,y --;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			if((abs(i - x) + abs(j - y)) <= r){
				cout << a[i][j];
			}else{
				cout << '*';
			}
		}
		cout << endl;
	}

	return 0;
}

