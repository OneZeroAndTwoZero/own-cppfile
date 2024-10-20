#include<bits/stdc++.h>
using namespace std;

int num_day = 0;
int h,m;
int d_;
int check[6] = {0};

bool p(){
	int cha;
	check[0] = h / 10;
	check[1] = h % 10;
	check[2] = m / 10;
	check[3] = m % 10;
	cha = check[3] - check[2];
	for(int i = 2;i < 4;i++){
		if(check[i] != check[i - 1] + cha) return 0;
	}
	if(check[0] != 0){
		if(check[0] + cha != check[1]) return 0;
	}
	return 1;
}

void cz(int d){
	while(d --){
		m += 1;
		h += m / 60;
		m %= 60;
		h = (h - 1) % 12 + 1;
		if(p()) num_day ++;
    }
}

int main(){
	scanf("%d",&d_);
	num_day = 31 * (d_ / (720));
	d_ %= (720);
	h = 12,m = 0;
	cz(d_);
	printf("%d\n",num_day);

	return 0;
}

