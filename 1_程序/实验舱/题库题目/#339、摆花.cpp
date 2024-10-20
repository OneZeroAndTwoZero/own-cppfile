#include<bits/stdc++.h>
using namespace std;

int n,m,ans = 0;
int a[1005] = {0};

void dfs(int k,int sum){
	if(k == n){
		if(sum == m){
			ans = (ans + 1) % 1000007;
		}
		return;
	}
	if(sum > m) return;
	for(int i = 0;i <= a[k] && sum + i <= m;i++){
		dfs(k + 1,sum + i);
	}
}

int main(){
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	dfs(0,0);
	cout << ans << endl;

	return 0;
}

