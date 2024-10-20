#include<bits/stdc++.h>
using namespace std;

int n,m,cnt,now = 1,peo = 0;
int out[15],pos = 5;
bool ans[1000005] = {0};

int main(){
	scanf("%d %d",&n,&m);
	cnt = n;
	while(cnt){
		while(ans[now]){
			now = (now % n) + 1;
		}
		peo ++;
		if(peo == m){
			peo = 0;
			cnt --;
			ans[now] = 1;
			if(cnt < 5) out[--pos] = now;
		}
		now = (now % n) + 1;
	}
	for(int i = 0;i < 5;i ++){
		printf("%d ",out[i]);
	}

	return 0;
}

