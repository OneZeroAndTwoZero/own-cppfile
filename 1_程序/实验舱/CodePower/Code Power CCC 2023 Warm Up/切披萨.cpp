#include<bits/stdc++.h>
using namespace std;

int n,d,now = 0,ans = 1;
bool a[1005] = {1};

int main(){
	scanf("%d",&n);
	while(n --){
		scanf("%d",&d);
		now = (now + d) % 360;
		a[now] = 1;
	}
	now = 1;
	for(int i = 0;i < 360;i++){
		if(!a[i]) now ++;
		else ans = max(ans,now),now = 1;
	}
	ans = max(ans,now);
	printf("%d\n",ans);

	return 0;
}

