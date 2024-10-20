#include<bits/stdc++.h>
using namespace std;

struct xy{
	int x;
	int y;
};

xy qiang[100005] = {0};
xy ren[100005] = {0};
xy now;

int suan(int a,int b,int n){
	return -a + (b - n);
}

xy ans(int i,int n){
	xy zb;
	zb.x = suan(qiang[i != 0 ? (i - 1)%n : n - 1].x,ren[i].x,now.x);
	zb.y = suan(qiang[i != 0 ? (i - 1)%n : n - 1].y,ren[i].y,now.y);
	return zb;
}

int main(){
    now.x = 0;
    now.y = 0;
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n - 1;i++){
		cin >> qiang[i].x >> qiang[i].y;
	}
	qiang[n - 1].x = 0,qiang[n - 1].y = 0;
	for(int i = 0;i < m;i++){
		cin >> ren[i].x >> ren[i].y;
	}
	for(int i = 0;i < m;i++){
		xy tem = ans(i,n);
		now.x = ren[i].x,now.y = ren[i].y;
		cout << tem.x << " " << tem.y << endl;
	}

	return 0;
}

