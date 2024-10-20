#include<bits/stdc++.h>
using namespace std;

struct ball{
	int xi,yi;
};

int n,ans = 0;
ball a[200005];
int now[200005] = {0};

bool cmp(ball a,ball b){
	if(a.xi != b.xi) return a.xi < b.xi;
	return a.yi < b.yi;
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d %d",&a[i].xi,&a[i].yi);
	}
	sort(a,a + n,cmp);
	for(int i = 0;i < n;i++){
		if(now[a[i].yi] > 0){
			now[a[i].yi - 1] ++;
			now[a[i].yi] --;
		}else{
			now[a[i].yi - 1] ++;
			ans ++;
		}
	}
	printf("%d\n",ans);

	return 0;
}

