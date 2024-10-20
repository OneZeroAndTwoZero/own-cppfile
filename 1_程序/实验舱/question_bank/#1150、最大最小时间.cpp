#include<bits/stdc++.h>
using namespace std;

int a[15],ansmax = 0,ansmin = 1919810;
bool vis[15];
int t[15];

bool check(int a){
	int h = (a / 10000);
	int m = (a / 100) % 100;
	int s = a % 100;
	return h < 24 && m < 60 && s < 60;
}

void out(int a){
	int h = (a / 10000);
	int m = (a / 100) % 100;
	int s = a % 100;
	printf("%02d:%02d:%02d\n",h,m,s);
}

void dfs(int k){
	if(k == 6){
		int res = 0;
		for(int i = 0;i < 6;i ++){
			res = (res << 3) + (res << 1) + t[i];
		}
		// cout << res << ";;\n";
		if(check(res)){
			if(res > ansmax) ansmax = res;
			if(res < ansmin) ansmin = res;
		}
		return;
	}
	for(int i = 0;i < 6;i ++){
		if(!vis[i]){
			t[k] = a[i];
			vis[i] = 1;
			dfs(k + 1);
			vis[i] = 0;
		}
	}
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	for(int i = 0;i < 6;i ++){
		scanf("%d",&a[i]);
	}
	dfs(0);
	if(ansmin == 1919810){
		printf("ERROR\n");
	}else{
		out(ansmax);
		out(ansmin);
	}

	return 0;
}