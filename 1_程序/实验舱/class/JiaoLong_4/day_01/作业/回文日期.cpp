#include<bits/stdc++.h>
using namespace std;

int f,s;
bool rf = 0,rs = 0;
int n,t;

void cz(int y){
	int m = (y % 10) * 10 + (y % 100 / 10);
	if(m <= 0 || m > 12) return;
	int d = (y % 1000 / 100) * 10 + (y / 1000);
	if(d <= 0 || d > 31) return;
	if(m == 2 || m == 4 || m == 6 || m == 9 || m == 11){
		if(d = 31) return;
	}
	if(m == 2){
		if(y % 4 == 0 && y % 100 != 0 || (y % 400 == 0)) if(d > 29) return;
		else if(d > 28) return;
	}
	if(!rf){
		rf = 1;
		f = y * 10000 + m * 100 + d;
	}
	if((y % 100 / 10) == (y / 1000) && (y % 10) == (y % 1000 / 100) /* && (y/ 1000) != (y % 10) */ ){
		if(!rs){
			rs = 1;
			s = y * 10000 + m * 100 + d;
		}
	}
}

int main(){
	scanf("%d",&n);
	t = n / 10000;
	int m = (t % 10) * 10 + (t % 100 / 10);
	int d = (t % 1000 / 100) * 10 + (t / 1000);
	if(n % 10000 / 100 > m || (n % 10000 / 100 == m && (n % 100) >= d)) t ++;
	while(!(rf && rs)){
		cz(t);
		t ++;
	}
	printf("%d\n",f);
	printf("%d\n",s);

	return 0;
}

