#include<bits/stdc++.h>
using namespace std;

int ans[10000005] = {0};
int n,m,cnt = 0;

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 2;i <= m;i ++){
		if(!ans[i]) ans[i] = 1;
		for(int j = 2;j <= i && j * i <= m;j ++){
			ans[i * j] = ans[i] + ans[j];
		}
		if(i >= n) cnt = max(cnt,ans[i]);
	}
	printf("%d\n",cnt);

	return 0;
}

