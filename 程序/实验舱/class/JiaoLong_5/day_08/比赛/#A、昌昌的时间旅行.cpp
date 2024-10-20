#include<bits/stdc++.h>
using namespace std;

struct dian{
	int xi,yi;
};

int n,d;
int val[1005] = {0};
long long ans[105][105] = {0};
dian a[1005];

int main(){
	scanf("%d %d",&n,&d);
	for(int i = 2;i < n;i ++){
		scanf("%d",&val[i]);
	}
	for(int i = 1;i <= n;i++){
		scanf("%d %d",&a[i].xi,&a[i].yi);
	}
	memset(ans,0x3f,sizeof(ans));
	for(int k = 1;k <= n;k++){
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= n;j++){
				if(i == j){
					ans[i][j] = 0;
					continue;
				}
				long long check = 0x3f3f3f3f,tem;
				tem = (long long)d * (abs(a[i].xi - a[k].xi) + abs(a[i].yi - a[k].yi)) - val[i];
				check = min(check,tem);
				tem += (long long)d * (abs(a[k].xi - a[j].xi) + abs(a[k].yi - a[j].yi));
				if(i != k) tem -= val[k];
				check = max(check,tem);
				if(check < ans[i][j]){
					ans[i][j] = check;
				}
			}
		}
	}
	printf("%lld\n",max(ans[1][n],0LL));

	return 0;
}

