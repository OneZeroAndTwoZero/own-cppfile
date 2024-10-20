#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[1005][1005] = {0};
long long ans;
long long dph[1005][1005][3] = {0};
long long dpw[1005][1005][3] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	scanf("%d %d",&n,&m);
	for(int i = 1;i <= n;i ++){
		for(int j = 1;j <= m;j ++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i = 1;i <= n;i ++){
		dpw[i][1][0] = dpw[i][1][1] = 0;
		for(int j = 2;j <= m;j ++){
			dpw[i][j][0] = max(dpw[i][j - 1][0],dpw[i][j - 1][1]);
			dpw[i][j][1] = max(dpw[i][j - 1][1],dpw[i][j - 1][0] + max(0,a[i][j - 1] + a[i][j]));
		}
        ans += max(dpw[i][m][0],dpw[i][m][1]);
	}
    for(int j = 1;j <= m;j ++){
		dph[1][j][0] = dph[1][j][1] = 0;
		for(int i = 2;i <= n;i ++){
			dph[i][j][0] = max(dph[i - 1][j][0],dph[i - 1][j][1]);
			dph[i][j][1] = max(dph[i - 1][j][1],dph[i - 1][j][0] + max(0,a[i - 1][j] + a[i][j]));
		}
        ans += max(dph[n][j][0],dph[n][j][1]);
	}
    printf("%lld\n",ans);

	return 0;
}