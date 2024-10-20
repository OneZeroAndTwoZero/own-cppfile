#include<bits/stdc++.h>
using namespace std;

struct node{
	int x;
	int ti;
};

int cnt[300005] = {0},ans = 0;
int n,t,k,p;
queue<node> q;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	scanf("%d",&n);
	for(int i = 0;i < n;i ++){
		scanf("%d %d",&t,&k);
		while(q.size() && q.front().ti + 86400 <= t){
			cnt[q.front().x] --;
			if(!cnt[q.front().x]) ans --;
			q.pop();
		}
		for(int j = 0;j < k;j ++){
			scanf("%d",&p);
			if(!cnt[p]) ans ++;
			cnt[p] ++;
			q.push({p,t});
		}
		printf("%d\n",ans);
	}

	return 0;
}

