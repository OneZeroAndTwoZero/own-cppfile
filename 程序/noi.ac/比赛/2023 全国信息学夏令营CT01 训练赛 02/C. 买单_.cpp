#include<bits/stdc++.h>
using namespace std;

int n,q,k,m,pos;
int a[100005] = {0};
long long sum[100005];
long long ans = 0;

int bsearch(){
	int l = 1,r = min(pos,m);
	while(l <= r){
		int mid = (l + r) >> 1;
		int otherp = n - (m - mid);
		//cout << l << ";;;" << r << ";;;" << mid << ";;;" << otherp << endl;
		if(otherp <= pos){
			l = mid + 1;
			continue;
		}
		if(a[mid] == 2 * k - a[otherp]) return mid;
		if(a[mid] > 2 * k - a[otherp]){
			r = mid - 1;
		}else{
			l = mid + 1;
		}
	}
	return r;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	scanf("%d %d",&n,&q);
	for(int i = 1;i <= n;i ++){
		scanf("%d",&a[i]);
	}
	sort(a + 1,a + n + 1);
	for(int i = 1;i <= n;i ++){
		sum[i] = a[i] + sum[i - 1];
	}
	while(q --){
		scanf("%d %d",&k,&m);
		pos = upper_bound(a + 1,a + n + 1,k) - a - 1;
		int leafp = bsearch();
		int otherp = n - (m - leafp - 1);
		// cout << leafp << "[][]" << otherp << endl;
		// cout << sum[leafp] << endl;
		// cout << sum[otherp - 1] - sum[n] << endl;
		// cout << 2 * k * (m - leafp) << endl;
		ans = sum[leafp] + 2LL * k * (m - leafp) + (sum[otherp - 1] - sum[n]);
		printf("%lld\n",ans);
	}

	return 0;
}