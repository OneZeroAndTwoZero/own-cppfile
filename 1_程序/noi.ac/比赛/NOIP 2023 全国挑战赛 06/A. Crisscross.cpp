#include<bits/stdc++.h>
using namespace std;

int n,m,ans = 0;
char a[1005][1005];
int cnth[1005],cntw[1005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d %d",&n,&m);
	for(int i = 0;i < n;i ++){
		scanf("%s",a[i]);
		for(int j = 0;j < m;j ++){
			if(a[i][j] == '0'){
				cnth[i] ++,cntw[j] ++;
			}
		}
	}
	ans = n + m + 1;
	for(int i = 0;i < n;i ++){
		if(cnth[i] == 0) ans --;
	}
	for(int i = 0;i < m;i ++){
		if(cntw[i] == 0) ans --;
	}
	for(int i = 0;i < n;i ++){
		for(int j = 0;j < m;j ++){
			if(cnth[i] == cntw[j] && cnth[i] == 1) ans --;
		}
	}
	printf("%d\n",ans);

	return 0;
}
