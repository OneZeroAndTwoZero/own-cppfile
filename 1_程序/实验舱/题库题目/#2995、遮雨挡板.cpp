#include<bits/stdc++.h>
using namespace std;

int n,sx,sy,ex,ey,ans = 0;
int d[100005];

int main(){
	scanf("%d",&n);
	while(n --){
		scanf("%d %d %d %d",&sx,&sy,&ex,&ey);
		d[sx] --,d[ex] ++;
	}
	for(int i = 1;i < 100005;i++) d[i] = d[i - 1] + d[i];
	for(int i = 0;i < 100005;i++){
		if(d[i] < 0) ans ++;
	}
	printf("%d\n",ans);

	return 0;
}

