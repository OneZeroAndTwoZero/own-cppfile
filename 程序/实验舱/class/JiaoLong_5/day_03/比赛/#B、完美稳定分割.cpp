#include<bits/stdc++.h>
using namespace std;

int n;
long long a[100005] = {0},ans = 0;

int zhao(int s,long long x){
	int l = s,r = n;
	while(l <= r){
		int mid = (l + r) >> 1;
		if(a[mid] >= x){
			r = mid - 1;
		}else{
			l = mid + 1;
		}
	}
	return l;
}

int zhao2(int s,long long x){
	int l = s,r = n;
	while(l <= r){
		int mid = (l + r) >> 1;
		if(a[mid] > x){
			r = mid - 1;
		}else{
			l = mid + 1;
		}
	}
	return r;
}

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		scanf("%lld",&a[i]);
		a[i] = a[i - 1] + a[i];
	}
	for(int i = 1;i <= n;i++){
		long long left = a[i];
		long long sheng = a[n] - a[i - 1];
		sheng = sheng / 2 + a[i];
		int mid = zhao2(i + 1,sheng);
		int mid2 = zhao(i + 1,a[i] * 2);
		if(mid < 1 || mid2 < 1 || mid >= n || mid >= n || a[mid] - a[i] < a[i]) continue;
		cout << i << ";;;" << mid << ";;;" << mid2 << endl;
		ans += max(mid - mid2 + 1,0);
		ans %= 1000000007;
	}
	printf("%lld\n",ans);

	return 0;
}

