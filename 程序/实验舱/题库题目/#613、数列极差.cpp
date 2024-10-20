#include<bits/stdc++.h>
using namespace std;

int n,t;
int a[100005];
long long max_,min_;

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	cin >> t;
	sort(a,a + n);
	max_ = a[0],min_ = a[n - 1];
	for(int i = 1;i < n;i++){
		max_ = max_ * a[i] + 1;
	}
	for(int i = n - 2;i >= 0;i--){
		min_ = min_ * a[i] + 1;
	}
	printf("%lld\n",max_ - min_);

	return 0;
}

