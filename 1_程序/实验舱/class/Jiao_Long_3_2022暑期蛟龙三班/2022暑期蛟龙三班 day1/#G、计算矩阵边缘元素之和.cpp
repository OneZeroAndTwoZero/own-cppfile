#include<bits/stdc++.h>
using namespace std;

int n,m,a,ans = 0;

int main(){
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a;
			if(i == 0 || i == n - 1 || j == 0 || j == m - 1){
				ans += a;
			}
		}
	}
	cout << ans << endl;

	return 0;
}

