#include<bits/stdc++.h>
using namespace std;

bool ok(int a){
	int one = a / 1000,two = a % 1000 / 100,three = a % 100 / 10,four = a % 10;
	if(one == two || one == three || one == four || two == three || two == four || three == four){
		return 0;
	}else{
		return 1;
	}
}

int main(){
	int y;
	cin >> y;
	while(y ++){
		if(ok(y)){
			cout << y << endl;
			return 0;
		}
	}

	return 0;
}

