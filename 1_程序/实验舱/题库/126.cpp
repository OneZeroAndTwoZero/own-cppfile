#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int ans = 0;
	int t1,t2,t3,t4;
	for(int i = 1;i < n;i++){
		t1 = i;
		for(int j = 1;j * 2 < n - i;j ++){
			t2 = j;
			for(int k = 1;k * 5 < n - i - j * 2;k ++){
				t3 = k;
				if((n - t1 - 2 * t2 - 5 * t3) % 10 != 0){
					continue;
				}
				t4 = (n - t1 - 2 * t2 - 5 * t3) / 10;
				if(t1 + t2 + t3 + t4 == m && t4 != 0 && t3 != 0 && t2 != 0 && t1 != 0){
					ans ++;
				}
			}
		}
	}
	cout << ans << endl;

	return 0;
}

