#include<bits/stdc++.h>
using namespace std;

int main(){
	int r,n;
	cin >> r >> n;
	int now = 0;
	int ans = 0;
	for(int i = 0;i < n;i++){
		int tem;
		cin >> tem;
		now += tem;
		if(abs(now) <= r){
			ans ++;
		}
	}
	cout << ans << endl;

	return 0;
}

