#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n][n] = {0};
	int k = 1;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			a[i][j] = k;
			k++;
		}
	}
	int is,js,ie,je;
	cin >> is >> js;
	is--,js--;
	int m;
	cin >> m;
	ie = is + m - 1,je = js + m - 1;
	int ans = 0;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			if(i >= is && i <= ie && j >= js && j <= je){
				ans += a[i][j];
			}
		}
	}
	cout << ans << endl;

	return 0;
}

