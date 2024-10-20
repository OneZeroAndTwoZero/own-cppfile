#include<bits/stdc++.h>
using namespace std;

int l_,n,m,l = 1,r = 1e9,ans;
int a[50005] = {0};

bool check(int x){
	int gs = 0;
	for(int i = 0;i <= n + 1;i++){
		int need = a[i] + x;
		while(a[++i] < need && i <= n + 1){
			gs ++;
		}
		i --;
	}
	return gs <= m;
}

int main(){
	scanf("%d %d %d",&l_,&n,&m);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
	}
	a[n + 1] = l_;
	while(l <= r){
		int mid = (l + r) >> 1;
		if(check(mid)){
			ans = mid;
			l = mid + 1;
		}else{
			r = mid - 1;
		}
	}
	printf("%d\n",ans);

	return 0;
}

