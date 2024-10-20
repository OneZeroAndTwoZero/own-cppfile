#include<bits/stdc++.h>
using namespace std;

int n,m,q;
int a[1000006] = {0};

int half(int x){
	int l = 0,r = n - 1,res = -1;
	while(l <= r){
		int mid = (l + r) >> 1;
		if(a[mid] >= x){
			res = mid;
			r = mid - 1;
		}else{
			l = mid + 1;
		}
	}
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	scanf("%d %d",&n,&m);
	for(int i = 0;i < n;i ++){
		scanf("%d",&a[i]);
	}
	while(m --){
		scanf("%d",&q);
		int r = half(q);
		if(a[r] == q) printf("%d ",r + 1);
		else printf("%d ",-1);
	}

	return 0;
}

