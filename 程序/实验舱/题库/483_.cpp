#include<bits/stdc++.h>
using namespace std;

int a[10] = {0};

void cz(){
	for(int i = 0;i < 10;i++){
		a[i] = 0;
	}
}

bool ok(int y){
	cz();
	while(y){
		a[y % 10] ++;
		y /= 10;
	}
	for(int i = 0;i < 10;i++){
		if(a[i] > 1) return 0;
	}
	return 1;
}

int main(){
	int y;
	cin >> y;
	for(int i = y + 1;;i++){
		if(ok(i)){
			cout << i << endl;
			return 0;
		}
	}

	return 0;
}

