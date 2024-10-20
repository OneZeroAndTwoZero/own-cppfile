#include<bits/stdc++.h>
using namespace std;

int main(){
	int x,y;
	cin >> x >> y;
	int luc = 0;
	int fx = 1;
	int now = x;
	int xuyao = 1;
	int yidong = 0;
	while(now != y){
		now += fx;
		yidong += fx;
		if(yidong == xuyao){
			fx *= -1;
			xuyao *= -2;
		}
		luc ++;
	}
	cout << luc << endl;

	return 0;
}

