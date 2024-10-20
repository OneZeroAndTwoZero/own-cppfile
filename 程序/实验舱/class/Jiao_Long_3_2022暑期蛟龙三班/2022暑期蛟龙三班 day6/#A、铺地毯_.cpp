#include<bits/stdc++.h>
using namespace std;

int n;

struct tan_{
	int x,y,dx,dy;
};

tan_ t[10002];

int main(){
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> t[i].x >> t[i].y >> t[i].dx >> t[i].dy;
	}
	int x1,y1;
	cin >> x1 >> y1;
	for(int i = n;i >= 1;i--){
		if(t[i].x <= x1 && t[i].y <= y1 && t[i].x + t[i].dx >= x1 && t[i].y + t[i].dy > y1){
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;

	return 0;
}

