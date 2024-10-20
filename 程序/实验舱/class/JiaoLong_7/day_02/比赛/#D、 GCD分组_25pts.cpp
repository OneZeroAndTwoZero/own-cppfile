#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[1000006];
int maxn[105];
vector<int> num[105];

int solve(int k){
	int res = 0;
	for(int i = 1;i <= k;i ++){
		int cur = num[i][0];
		for(auto && x : num[i]){
			// cout << x << " [] ";
			cur = __gcd(cur,x);
		}
		// cout << cur << "\n\n";
		res += cur;
	}
	// cout << k << " " << res << ";;\n";
	return res;
}

void dfs(int k,int cnt){
	if(k == n + 1){
		maxn[cnt] = max(maxn[cnt],solve(cnt));
		return;
	}
	for(int i = 1;i <= cnt;i ++){
		num[i].push_back(a[k]);
		dfs(k + 1,cnt);
		num[i].pop_back();
	}
	num[cnt + 1].push_back(a[k]);
	dfs(k + 1,cnt + 1);
	num[cnt + 1].pop_back();
}

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
		scanf("%d",&a[i]);
	}
    if(n <= 10){
		dfs(1,0);
		for(int i = 1;i <= m;i ++){
			printf("%d%c",maxn[i]," \n"[i == m]);
		}
	}else if(m == 2){
		sort(a + 1,a + n + 1);
		int cur = a[1];
		for(int i = 1;i <= n - 1;i ++){
			cur = __gcd(cur,a[i]);
		}
		printf("%d %d\n",__gcd(cur,a[n]),cur + a[n]);
	}

    return 0;
}
