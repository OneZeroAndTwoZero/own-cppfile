#include<bits/stdc++.h>
using namespace std;

bool r(int a){
	if(a % 400 == 0) return 1;
	if(a % 4 == 0 && a % 100 != 0) return 1;
	return 0;
}

int day(int y,int m,int d){
	int ans = 0;
	for(int i = 1;i < m;i++){
		if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
			ans += 31;
		}else if(i != 2){
			ans += 30;
		}else{
			ans += 28;
			if(r(y)) ans ++;
		}
	}
	ans += d;
	return ans;
}

int main(){
	int y,m,d;
	cin >> y >> m >> d;
	int ts = 31;
	for(int i = 2021;i < y;i ++){
		ts += 365;
		if(r(i)) ts ++;
	}
	ts += day(y,m,d);
	cout << ts << endl;
	int xq = ts % 7 + 1;
	cout << "*" << xq << endl;

	return 0;
}

