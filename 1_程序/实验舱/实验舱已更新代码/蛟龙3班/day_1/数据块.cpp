#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,ans = 0;
	cin >> n >> m;
	int a[n][m] = {0};
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	int is,js,ie,je;
	cin >> is >> js >> ie >> je;
	is--,js--,ie--,je--;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			if(i >= is && i <= ie && j >= js && j <= je){
				ans += a[i][j];
			}
		}
	}
	cout << ans << endl;

	return 0;
}

