#include<bits/stdc++.h>
using namespace std;

int n,t;

bool check(int a){
	long long res = 0,p = 1,c = 0,s = 0;
	while(a){
		res += (a % 8) * p;
		a /= 8;
		p *= 10;
	}
	s = res;
	while(s){
		c = c * 10 + (s % 10);
		s /= 10;
	}
	return res == c;
}

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n / i;i ++){
		t = i * i;
		if(check(t)) printf("%d ",t);
	}

	return 0;
}

