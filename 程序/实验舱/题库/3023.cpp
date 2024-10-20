#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};

int main(){
	int w,n;
	cin >> w >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a + n);
	int f = 0,l = n - 1;
	int ans = 0;
	while(f <= l){
		ans ++;
		if(a[l] + a[f] <= w){
			f ++,l--;
		}else{
			l --;
		}
	}
	cout << ans << endl;

	return 0;
}

