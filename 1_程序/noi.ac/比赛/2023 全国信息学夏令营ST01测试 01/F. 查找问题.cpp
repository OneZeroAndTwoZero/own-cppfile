#include<bits/stdc++.h>
using namespace std;

int n,m,x;
int a[100005] = {0};

int search(){
	int l = 0,r = n - 1;
	while(l <= r){
		int mid = (l + r) >> 1;
		if(a[mid] == x) return x;
		if(a[mid] < x) l = mid + 1;
		else r = mid - 1;
	}
	if(r < 0) return a[l];
	if(l >= n) return a[r];
	if(abs(x - a[l]) < abs(x - a[r])) return a[l];
	return a[r];
}

int main(){
//#ifndef ONLINE_JUDGE
//    freopen("data.in","r",stdin);
//    freopen("data.out","w",stdout);
//#endif

	scanf("%d",&n);
	for(int i = 0;i < n;i ++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	while(m --){
		scanf("%d",&x);
		printf("%d\n",search());	
	}

	return 0;
}

