#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[200005] = {0},b[200005] = {0};

int main(){
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> a[i] >> b[i];
	}
	for(int i = 0;i <= 2 * m;i++){
		int ans = 0;
		for(int j = 0;j < n;j++){
			for(int k = 0;k < n;k++){
				if((a[j] + a[k]) <= i && i <= (b[j] + b[k])) ans ++;
			}
		}
		cout << ans << endl;
	}

	return 0;
}

