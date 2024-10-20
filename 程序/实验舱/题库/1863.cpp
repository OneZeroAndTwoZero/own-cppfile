#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	if(b > a) swap(a,b);
	return b == 0 ? a : gcd(b,a % b);
}

int main(){
	int n,m;
	cin >> n >> m;
	int ans = 0;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j ++){
			if(i == 0){
				if(j <= 1) ans ++;
			}else if(j == 0){
				if(i <= 1) ans ++;
			}else{
				if(gcd(i,j) == 1) ans ++;
			}
		}
	}
	cout << ans << endl;

	return 0;
}

