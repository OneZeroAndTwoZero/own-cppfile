#include<bits/stdc++.h>
using namespace std;

int n,m;
long long sum = 0;
long long a[1000005];
bool vis[2000006];
long long maxn[1000005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
		scanf("%lld",&a[i]);
		sum += a[i];
		vis[a[i]] = 1;
	}
	for(long long k = 1;k <= 2000000;k ++){
		int cnt = 0;
		long long cur = 0;
		for(int i = 1;i <= 2000000 / k;i ++){
			if(!vis[i * k]) continue;
			cnt ++;
			cur += i * k;
			maxn[n - cnt + 1] = max(maxn[n - cnt + 1],sum - cur + k);
		}
	}
	for(int i = 1;i <= m;i ++){
		printf("%lld%c",maxn[i]," \n"[i == m]);
	}

    return 0;
}
