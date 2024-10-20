#include<bits/stdc++.h>
using namespace std;

int n,m,ans = 0;
int a[1005][1005] = {0};

int main(){
	cin >> n >> m;
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

