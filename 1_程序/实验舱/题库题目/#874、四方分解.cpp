#include<bits/stdc++.h>
using namespace std;

int n,now,ans = 0;

int main(){
	cin >> n;
	for(int i = 0;now <= n;i++){
		now = pow(i,2);
		for(int j = i;now <= n;j++){
			now = pow(i,2) + pow(j,2);
			for(int k = j;now <= n;k++){
				now = pow(i,2) + pow(j,2) + pow(k,2);
				int check = sqrt(n - now);
				if(n - now < k * k) break;
				if(check * check == n - now){
					ans ++;
				}
			}
			now = pow(i,2) + pow(j,2);
		}
		now = pow(i,2);
	}
	cout << ans << endl;

	return 0;
}

