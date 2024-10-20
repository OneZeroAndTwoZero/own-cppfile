#include<bits/stdc++.h>
using namespace std;

int n,x;
int a[600005] = {0};
long long ans,cnt;

int zhao_l(int x_){
	int l = 0,r = n - 1;
	while(l <= r){
		int mid = (l + r) >> 1;
		if(a[mid] >= x_){
			r = mid - 1;
		}else{
			l = mid + 1;
		}
	}
	if(l < 0) return 0;
	return l;
}

int zhao_r(int x_){
	int l = 0,r = n - 1;
	while(l <= r){
		int mid = (l + r) >> 1;
		if(a[mid] > x_){
			r = mid - 1;
		}else{
			l = mid + 1;
		}
	}
	if(r > n - 1) return n - 1;
	return r;
}

int main(){
	scanf("%d %d",&n,&x);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a + n);
	if(n < 3){
		printf("0\n");
		return 0;
	}
	ans = n * (n - 1) * (n - 2) / 6;
	for(int i = 0;i < n;i++){
		cout << a[i] << "///\n";
		cout << zhao_l(a[i] - x) << "[][]" << zhao_r(a[i] + x) << endl;
		cnt += zhao_l(a[i] - x);
		cnt += n - zhao_r(a[i] + x) - 1;
	}
	cout << ans << ";;;" << cnt << endl;
	ans -= cnt / 2;
	printf("%lld\n",ans);

	return 0;
}

