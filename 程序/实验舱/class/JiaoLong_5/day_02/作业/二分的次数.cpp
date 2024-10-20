#include<bits/stdc++.h>
using namespace std;

int a[200005] = {0};
int n,x,ans = 0;

void find(int x){
	int l = 0,r = n - 1;
	while(l <= r){
		int mid = (l + r) >> 1;
		ans ++;
		if(a[mid] == x) return;
		if(a[mid] > x){
			r = mid - 1;
		}else{
			l = mid + 1;
		}
	}
}

int main(){
	scanf("%d %d",&n,&x);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a + n);
	find(x);
	printf("%d\n",ans);

	return 0;
}

