#include<bits/stdc++.h>
using namespace std;

bool r(int a){
	if(a % 400 == 0) return 1;
	if(a % 4 == 0 && a % 100 != 0) return 1;
	return 0;
}

int day(int y){
	int ans = 0;
	for(int i = 1600;i < y;i++){
		ans += 365;
		if(r(i)) ans ++;
	}
	ans += 178;
	if(r(y)) ans ++;
	return ans;
}

int main(){
	int n,m;
	cin >> n >> m;
	int gs = 0;
	for(int i = n;i <= m;i++){
		int t = day(i);
		//cout << ((t - 1) % 7 + 1) << endl;
		if(((t - 1) % 7 + 1) == 1 || ((t - 1) % 7 + 1) == 2){
			gs ++;
		}
	}
	cout << gs << endl;

	return 0;
}

