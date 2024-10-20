#include<bits/stdc++.h>
using namespace std;

bool su(int a){
	if(a == 2) return 1;
	if(a < 2 || a % 2 == 0) return 0;
	for(int i = 2;i * i <= a;i++){
		if(a % i == 0) return 0;
	}
	return 1;
}

bool xy(int a){
	if(a == 0) return 0;
	while(a){
		if(!su(a)) return 0;
		a /= 10;
	}
	return 1;
}

int main(){
	int m,n;
	cin >> m >> n;
	for(int i = m;i <= n;i++){
		if(xy(i)){
			cout << i << endl;
		}
	}

	return 0;
}

