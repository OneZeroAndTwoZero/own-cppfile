#include<bits/stdc++.h>
using namespace std;

int l,r;

bool check(int x){
	int cnt = 0,t = x;
	while(t > 0){
		cnt += (t % 10) * (t % 10) * (t % 10) * (t % 10);
		t /= 10;
	}
	if(cnt == x) return 1;
	return 0;
}

int main(){
	scanf("%d %d",&l,&r);
	for(int i = l;i <= r;i ++){
		if(i >= 1000 &&i <= 9999 && check(i)){
			printf("%d ",i);
		}
	}

	return 0;
}

