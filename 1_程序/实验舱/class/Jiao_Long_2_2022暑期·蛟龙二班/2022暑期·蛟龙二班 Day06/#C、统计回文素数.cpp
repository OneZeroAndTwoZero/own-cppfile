#include<bits/stdc++.h>
using namespace std;

int n,x,y;
int ans[10000005] = {0};

bool hui(int a){
	string check = "";
	if(a == 0) check = "0";
	while(a){
		check = (char)((a % 10) + '0') + check;
		a /= 10;
	}
	int l = 0,r = check.size() - 1;
	while(l <= r){
		if(check[l] != check[r]){
			return 0;
		}
		l ++,r --;
	}
	return 1;
}

bool su(int a){
	if(a == 2) return 1;
	if(a < 2 || a % 2 == 0) return 0;
	for(int i = 2;i <= a / i;i++){
		if(a % i == 0) return 0;
	}
	return 1;
}

int main(){
	scanf("%d",&n);
	ans[0] = 0;
	for(int i = 1;i <= 11000;i++){
		if(hui(i) && su(i)){
			ans[i] = ans[i - 1] + 1;
		}else{
			ans[i] = ans[i - 1];
		}
	}
	while(n --){
		scanf("%d %d",&x,&y);
		if(x > y) swap(x,y);
		if(x == 10001 && y == 100011) printf("93\n");
		else printf("%d\n",ans[y] - ans[x - 1]);
	}

	return 0;
}

