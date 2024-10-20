#include<bits/stdc++.h>
using namespace std;

int t,n;
int ans[4] = {0};

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%d",&n);
		int cnt = 1,sum = 0;
		for(int i = 0;i < 4;i++) ans[i] = 0;
		while(sum < n){
		    int num = min(cnt,n - sum);
			if((cnt / 2) % 2 == 0){
				ans[0] += num / 2 + (num % 2 == 1 && sum % 2 == 0);
				ans[1] += num / 2 + (num % 2 == 1 && sum % 2 == 1);
			}else{
				ans[2] += num / 2 + (num % 2 == 1 && sum % 2 == 0);
				ans[3] += num / 2 + (num % 2 == 1 && sum % 2 == 1);
			}
			sum += cnt;
			cnt ++;
		}
		printf("%d %d %d %d\n",ans[0],ans[1],ans[2],ans[3]);
	}

	return 0;
}

