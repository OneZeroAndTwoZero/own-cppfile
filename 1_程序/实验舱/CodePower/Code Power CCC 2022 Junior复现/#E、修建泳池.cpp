#include<bits/stdc++.h>
using namespace std;

int h[500005] = {0},w[500005] = {0};
int n,t,x,y,ans1 = 0,ans2 = 0,now1 = 0,now2 = 0;

int main(){
	scanf("%d",&n);
	scanf("%d",&t);
	while(t --){
		scanf("%d %d",&x,&y);
		h[x] ++;
		w[y] ++;
	}
	for(int i = 1;i <= n;i++){
		if(h[i]) now1 = 0;
		else now1 ++;
		if(w[i]) now2 = 0;
		else now2 ++;
		ans1 = max(ans1,now1);
		ans2 = max(ans2,now2);
	}
	printf("%d\n",min(ans1,ans2));

	return 0;
}

