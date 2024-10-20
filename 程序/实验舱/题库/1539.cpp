#include<bits/stdc++.h>
using namespace std;

map<int,int> day;

bool r(int a){
	if(a % 4 != 0) return 0;
	if(a % 400 != 0 && a % 400 == 0) return 0;
	return 1;
}

int main(){
	day[1] = 31,day[2] = 28,day[3] = 31,day[4] = 30,day[5] = 31,day[6] = 30;
	day[7] = 31,day[8] = 31,day[9] = 30,day[10] = 31,day[11] = 30,day[12] = 31;
	int y,n;
	while(cin >> y >> n){
		day[2] = 28;
		if(r(y)) day[2] ++;
		int m = 0,d;
		int i = 1;
		while(n > 0){
			m ++;
			n -= day[i];
			i ++;
		}
		d = day[i - 1] - abs(n);
		printf("%04d-%02d-%02d\n",y,m,d);
    }

	return 0;
}

