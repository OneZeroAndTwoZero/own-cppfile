#include<bits/stdc++.h>
using namespace std;

int m,need;
int a[4][10005] = {0};
int cnt[20000007];
long long ans = 0;

int main(){
	scanf("%d",&m);
	for(int i = 0;i < 4;i++){
		scanf("%d",&a[i][0]);
		for(int j = 1;j <= a[i][0];j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i = 1;i <= a[0][0];i++){
		for(int j = 1;j <= a[1][0];j++){
		    cnt[a[0][i] + a[1][j]] ++;
		}
	}
	for(int i = 1;i <= a[2][0];i++){
		for(int j = 1;j <= a[3][0];j++){
		    need = m - a[2][i] - a[3][j];
		    if(need >= 0) ans += cnt[need];
		}
	}
	printf("%lld\n",ans);

	return 0;
}

