#include<bits/stdc++.h>
using namespace std;

map<int,string> x;

bool r(int a){
	if(a % 400 == 0) return 1;
	if(a % 4 == 0 && a % 100 != 0) return 1;
	return 0;
}

int day(int y,int m,int d){
	int ans = 0;
	for(int i = 1;i < y;i++){
		ans += 365;
		if(r(i)) ans ++;
	}
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
	x[1] = "Monday",x[2] = "Tuesday",x[3] = "Wednesday",x[4] = "Thursday",x[5] = "Friday",x[6] = "Saturday",x[7] = "Sunday";
	int y,m,d;
	cin >> y >> m >> d;
	int t = day(y,m,d);
	t = (t - 1) % 7 + 1;
	cout << x[t] << endl;

	return 0;
}

