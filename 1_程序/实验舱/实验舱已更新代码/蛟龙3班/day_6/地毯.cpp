#include<bits/stdc++.h>
using namespace std;

int a[10002][10002] = {0};

struct tan_{
	int x,y,dx,dy;
};

tan_ t[10001];

int main(){
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> t[i].x >> t[i].y >> t[i].dx >> t[i].dy;
		for(int k = t[i].x;k <= t[i].x + t[i].dx;k++){
			for(int j = t[i].y;j < t[i].y + t[i].dy;j++){
				a[j][k] = i;
			}
		}
	}
	int tx,ty;
	cin >> tx >> ty;
	if(a[ty][tx] == 0){
		cout << -1 << endl;
	}else{
		cout << a[tx][ty] << endl;
	}

	return 0;
}

