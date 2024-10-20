#include<bits/stdc++.h>
using namespace std;

bool ok(int a){
	if(!a) return 0;
	while(a){
		if(a % 10 == 3 || a % 10 == 7) return 0;
		a /= 10;
	}
	return 1;
}

int main(){
	int n;
	cin >> n;
	int ans = 0;
	for(int i = 1;i < n;i++){
		if(!ok(i)){
			continue;
		}
		for(int j = i + 1;j < n - i;j ++){
			if(!ok(j)){
				continue;
			}
			int k = n - i - j;
			if(!ok(k) || k <= j){
				continue;
			}
			if(i == j || i == k || j == k){
				continue;
			}
			ans ++;
		}
	}
	cout << ans;

	return 0;
}

