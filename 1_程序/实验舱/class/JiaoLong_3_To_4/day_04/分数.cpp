#include<bits/stdc++.h>
using namespace std;

int an[20] = {0};

int gongyueshu(int a,int b){
	if(a % b == 0) return b;
	return gongyueshu(b,a % b);
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> an[i];
	}
	int fz = an[n - 1];
	int fm = 1;
	while(--n){
		int tem = fz;
		fz = fm,fm = tem;
		fz += fm * an[n - 1];
		int gys = gongyueshu(fz,fm);
		fz /= gys,fm /= gys;
	}

	return 0;
}

