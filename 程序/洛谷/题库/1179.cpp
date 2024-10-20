#include<bits/stdc++.h>
using namespace std;

int c(int a){
	int ans = 0;
	while(a){
		if(a % 10 == 2) ans ++;
		a /= 10;
	}
	return ans;
}

int main(){
	int l,r;
	cin >>l >>r;
	int cs = 0;
	for(int i = l;i <= r;i++){
		cs += c(i);
	}
	cout << cs << endl;

	return 0;
}

