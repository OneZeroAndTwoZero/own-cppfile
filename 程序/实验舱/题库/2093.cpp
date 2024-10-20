#include<bits/stdc++.h>
using namespace std;

int j[105] = {0},y[105] = {0};

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> j[i] >> y[i];
	}
	int ans = j[0];
	for(int i = 1;i < n;i++){
		j[i] = min(j[i - 1] + y[i - 1],j[i]);
		ans += min(j[i - 1] + y[i - 1],j[i]);
	}
	cout << ans << endl;

	return 0;
}

