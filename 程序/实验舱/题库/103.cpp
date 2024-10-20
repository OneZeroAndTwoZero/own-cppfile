#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,p;
	cin >> n >> m >> p;
	int ans = 0;
	for(int i = 0;i * n <= p;i++){
		int ok = (p - i * n) % m;
		if(ok == 0 && (i != 0 && (p - i * n) / m != 0)) ans ++;
	}
	cout << ans << endl;

	return 0;
}

