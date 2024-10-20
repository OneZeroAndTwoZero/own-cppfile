#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,K,M;
	cin >> N >> K >> M;
	int ans = N - K * M;
	if(ans < 0) ans = 0;
	cout << ans << endl;

	return 0;
}

