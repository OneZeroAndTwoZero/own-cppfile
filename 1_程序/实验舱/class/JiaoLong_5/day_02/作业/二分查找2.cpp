#include<bits/stdc++.h>
using namespace std;

int a[200005] = {0};
int n,m,t;

int find(int x){
	int l = 0,r = n - 1;
	while(l <= r){
		int mid = (l + r) >> 1;
		if(a[mid] > x){
			r = mid - 1;
		}else{
			l = mid + 1;
		}
	}
	if(r >= n || a[r] != x){
		return -1;
	}else{
		return r;
	}
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a + n);
	while(m --){
		scanf("%d",&t);
		printf("%d\n",find(t));
	}

	return 0;
}

