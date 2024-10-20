#include<bits/stdc++.h>
using namespace std;

bool a[1005][1005] = {0};

int main(){
	int n;
	cin >> n;
	int ans = 0;
	for(int i = 0;i < n;i++){
		int x1,x2,y1,y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for(int k1 = x1;k1 < x2;k1++){
			for(int k2 = y1;k2 < y2;k2 ++){
				if(!a[k1][k2]){
					ans ++;
					a[k1][k2] = 1;
				}
			}
		}
	}
	cout << ans << endl;

	return 0;
}

