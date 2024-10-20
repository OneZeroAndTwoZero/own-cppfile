#include<bits/stdc++.h>
using namespace std;

int n;
long long ans = 0;
int a[500005] = {0};
int tem[500005] = {0};

void pai(int l,int r){
	if(l >= r) return;
	int mid = (l + r) >> 1;
	pai(l,mid);
	pai(mid + 1,r);
	int p1 = l,p2 = mid + 1,p = l;
	while(p1 <= mid && p2 <= r){
		if(a[p1] <= a[p2]){
			tem[p ++] = a[p1 ++];
		}else{
			tem[p ++] = a[p2 ++];
			ans += mid - p1 + 1;
		}
	}
	while(p1 <= mid) tem[p ++] = a[p1 ++];
	while(p2 <= r) tem[p ++] = a[p2 ++];
	for(int i = l;i <= r;i ++){
		a[i] = tem[i];
	}
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	scanf("%d",&n);
	for(int i = 0;i < n;i ++){
		scanf("%d",&a[i]);
	}
	pai(0,n - 1);
	printf("%lld\n",ans);

	return 0;
}

