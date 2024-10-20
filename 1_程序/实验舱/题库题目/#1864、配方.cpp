#include<bits/stdc++.h>
using namespace std;

int n,k,t,ans = 1;
int cnt[105][3] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	scanf("%d %d",&n,&k);
	for(int i = 0;i < n;i ++){
		for(int j = 0;j < k;j ++){
			scanf("%d",&t);
			cnt[j][t] ++;
		}
	}
	for(int i = 0;i < k;i ++){
		if(cnt[i][1] && cnt[i][2]){
			printf("%d\n",-1);
			return 0;
		}else if(!cnt[i][1] && !cnt[i][2]){
			ans *= 2;
		}
	}
	printf("%d\n",ans);

	return 0;
}