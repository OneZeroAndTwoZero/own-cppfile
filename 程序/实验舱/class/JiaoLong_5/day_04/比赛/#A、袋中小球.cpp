#include<bits/stdc++.h>
using namespace std;

long long n,q,l = 0,r = 1e9,ans = 0;
int t[200005] = {0};

bool check(int mid){
	long long re = 0;
	for(int i = 0;i < n;i++){
		if(t[i] - 1 >= mid) re += (t[i] - 1) / mid;
	}
	return re <= q;
}

int main(){
	cin >> n >> q;
	for(int i = 0;i < n;i++){
		cin >> t[i];
	}
	while(l <= r){
		int mid = (l + r) >> 1;
		if(check(mid)){
			ans = mid;
			r = mid - 1;
		}else{
			l = mid + 1;
		}
	}
	cout << ans << endl;

	return 0;
}

