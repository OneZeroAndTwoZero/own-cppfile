#include<bits/stdc++.h>
using namespace std;

int t,n,a,b;

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%d",&n);
		int cnt = 1;
		a = 0,b = 0;
		while(n > 0){
			if((cnt / 2) % 2 == 0){
				a += min(n,cnt);
			}else{
				b += min(n,cnt);
			}
			n -= cnt;
			cnt ++;
		}
		printf("%d %d\n",a,b);
	}

	return 0;
}

