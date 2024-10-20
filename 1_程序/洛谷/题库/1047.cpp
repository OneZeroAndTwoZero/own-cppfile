#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};

int main(){
	int l,m;
	cin >> l >> m;
	int ans = l + 1;
	for(int i = 0;i < m;i++){
		int v,u;
		cin >> v >> u;
		for(int i = v;i <= u;i++){
			if(!a[i]){
				ans --;
			}
			a[i] = 1;
		}
	}
	cout << ans << endl;

	return 0;
}

