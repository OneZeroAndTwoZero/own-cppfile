#include<bits/stdc++.h>
using namespace std;

int n,l = 1,r = 1e9,ans;
int a[200005] = {0};
long long k;

bool check(int x){
	long long cnt = 0;
	for(int i = ((n + 1) / 2) - 1;i < n;i++){
		cnt += max(0,x - a[i]);
	}
	return cnt <= k;
}

int main(){
	scanf("%d %lld",&n,&k);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a + n);
	l = a[((n + 1) / 2) - 1];
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

