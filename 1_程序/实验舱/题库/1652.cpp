#include<bits/stdc++.h>
using namespace std;

map<int,int> day;

bool ri(int n){
	if(n % 4 == 0 && (n % 100 != 0 || n % 400 == 0)) return 1;
	return 0;
}

int cou(int y,int m){
	int ans = 0;
	for(int i = 1990;i < y;i++){
		ans += 365;
		if(ri(i)) ans ++;
	}
	for(int i = 1;i < m;i++){
		ans += day[i];
		if(i == 2 && ri(y)) ans ++;
	}
	return ans + 1;
}

int main(){
	day[1] = 31,day[2] = 28,day[3] = 31,day[4] = 30,day[5] = 31,day[6] = 30;
	day[7] = 31,day[8] = 31,day[9] = 30,day[10] = 31,day[11] = 30,day[12] = 31;
	int y,m;
	cin >> y >> m;
	cout << "Sun Mon Tue Wed Thu Fri Sat" << endl;
	int need = day[m];
	if(m == 2 && ri(y)) need ++;
	int k = 1;
	int cnt = cou(y,m);
	int t = 0;
	while(cnt % 7){
		cout << "    ";
		cnt --;
		t ++;
	}
	while(k <= need){
		printf("%3d ",k);
		k ++;
		if((k + t - 1) % 7 == 0) cout << endl;
	}

	return 0;
}

