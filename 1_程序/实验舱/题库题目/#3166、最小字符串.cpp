#include<bits/stdc++.h>
using namespace std;

int n,k;
int ans[1000006] = {0};

int main(){
	cin >> n >> k;
	for(int i = 0;i < n;i++){
		ans[i] = 1;
		k --;
	}
	for(int i = n - 1;i >= 0 && k;i--){
		ans[i] += min(25,k);
		k -= min(25,k);
	}
	for(int i = 0;i < n;i++){
		cout << (char)('a' - 1 + ans[i]);
	}
	puts("");

	return 0;
}

