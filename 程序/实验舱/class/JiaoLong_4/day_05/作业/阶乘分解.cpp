#include<bits/stdc++.h>
using namespace std;

int n,pos = 0;
int a[1000005];
bool cnt[1000005] = {0};
int p[1000005] = {0};

void olshai(){
	for(int i = 2;i <= n;i++){
		if(!cnt[i]){
		    p[pos ++] = i;
		}
		for(int j = 0;j < pos && p[j] <= n / i;j++){
		 	cnt[i * p[j]] = 1;
		 	if(i % p[j] == 0) break;
		}
	}
}

void l(int t){
	if(t == 1) return;
	for(int i = 0;i < pos && p[i] <= t && t != 1;i++){
		while(t % p[i] == 0){
			a[p[i]] ++;
			t /= p[i];
		}
	}
	if(t != 1){
		a[t] ++;
	}
}

int main(){
	scanf("%d",&n);
	olshai();
	for(int i = 1;i <= n;i++){
		l(i);
	}
	for(int i = 0;i < pos;i++){
		if(a[p[i]]) printf("%d %d\n",p[i],a[p[i]]);
	}

	return 0;
}
