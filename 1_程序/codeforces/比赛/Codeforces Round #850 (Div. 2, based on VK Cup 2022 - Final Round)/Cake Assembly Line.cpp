#include<bits/stdc++.h>
using namespace std;

int t,n,w,h;
int a[200005]= {0},b[200005] = {0};

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%d %d %d",&n,&w,&h);
		for(int i = 0;i < n;i++){
			scanf("%d",&a[i]);
		}
		for(int i = 0;i < n;i++){
			scanf("%d",&b[i]);
		}
		sort(a,a + n);
		sort(b,b + n);
		int z = 1000000000,y = 1000000000;
		for(int i = 0;i < n;i ++){
			z = min(z,(b[i] - h) - (a[i] - w));
			y = min(y,(a[i] + w) - (b[i] + h));
		}
		if(y + z >= 0){
			puts("YES");
		}else{
			puts("NO");
		}
	}

	return 0;
}

