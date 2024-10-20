#include<bits/stdc++.h>
using namespace std;

int n,q,ans;
int l,r,x,t;
vector<int> a[300005];

int lsearch(int u,int x){
	int l = 0,r = a[u].size() - 1;
	while(l <= r){
		int mid = (l + r) >> 1;
		if(a[u][mid] == x) return mid;
		if(a[u][mid] < x) l = mid + 1;
		else r = mid - 1;
	}
	if(l < 0) return 10000000;
	return l;
}

int rsearch(int u,int x){
	int l = 0,r = a[u].size() - 1;
	while(l <= r){
		int mid = (l + r) >> 1;
		if(a[u][mid] == x) return mid;
		if(a[u][mid] < x) l = mid + 1;
		else r = mid - 1;
	}
	if(r >= a[u].size()) return -10000000;
	return r;
}

int main(){
//#ifndef ONLINE_JUDGE
//    freopen("data.in","r",stdin);
//    freopen("data.out","w",stdout);
//#endif

	scanf("%d",&n);
	for(int i = 0;i < n;i ++){
		scanf("%d",&t);
		a[t].push_back(i + 1);
	}
	scanf("%d",&q);
	while(q --){
		scanf("%d %d %d",&l,&r,&x);
		int num1 = lsearch(x,l),num2 = rsearch(x,r);
		ans = max(0,num2 - num1 + 1);
		printf("%d\n",ans);
	}

	return 0;
}

