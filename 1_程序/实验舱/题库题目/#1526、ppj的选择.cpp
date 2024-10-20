#include<bits/stdc++.h>
using namespace std;

int n,m,ans = 0;
int a[105] = {0};

void dfs(int sum,int k){
	if(k == n){
		if(sum == m) ans ++;
		return;
	}
	if(sum > m) return;
	
	dfs(sum,k + 1);
	dfs(sum + a[k],k + 1);
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

