#include<bits/stdc++.h>
using namespace std;

int n,m,k,ans;
long long h[1005][1005];
long long minn[1005][1005];
long long x;

long long getmin(int x1,int y1,int x2,int y2){
	long long res = 0x3f3f3f3f;
	for(int i = x1;i <= x2;i ++){
		for(int j = y1;j <= y2;j ++){
			res = min(res,h[i][j]);
		}
	}
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d %d %d",&n,&m,&k);
	for(int i = 1;i <= n;i ++){
		for(int j = 1;j <= m;j ++){
			scanf("%lld",&h[i][j]);
			// minn[i][j] = min({minn[i - 1][j],minn[i][j - 1],h[i][j]});
		}
	}
	for(int x1 = 1;x1 <= n;x1 ++){
		for(int y1 = 1;y1 <= m;y1 ++){
			for(int x2 = x1;x2 <= n;x2 ++){
				for(int y2 = y1;y2 <= m;y2 ++){
					if((x2 - x1 + 1) * (y2 - y1 + 1) < k) continue;
					x = max(x,getmin(x1,y1,x2,y2));
				}
			}
		}
	}
	for(int x1 = 1;x1 <= n;x1 ++){
		for(int y1 = 1;y1 <= m;y1 ++){
			for(int x2 = x1;x2 <= n;x2 ++){
				for(int y2 = y1;y2 <= m;y2 ++){
					long long tem = getmin(x1,y1,x2,y2);
					if(tem == x){
						ans = max((x2 - x1 + 1) * (y2 - y1 + 1),ans);
					}
				}
			}
		}
	}
	printf("%d %d\n",x,ans);

	return 0;
}