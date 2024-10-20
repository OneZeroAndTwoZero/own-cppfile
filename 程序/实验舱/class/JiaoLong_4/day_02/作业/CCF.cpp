#include<bits/stdc++.h>
using namespace std;

int n,w,t,now,xian;
int a[601] = {0};

int main(){
	scanf("%d %d",&n,&w);
	for(int i = 0;i < n;i++){
		scanf("%d",&t);
		a[t] ++;
		now = 0;
		xian = (i + 1) * w / 100;
		if(!xian) xian = 1;
		for(int j = 600;j >= 0;j--){
			now += a[j];
			if(now >= xian){
				printf("%d ",j);
				break;
			}
		}
	}

	return 0;
}

