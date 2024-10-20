#include<bits/stdc++.h>
using namespace std;

string N;
long long K;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	cin >> N >> K;
	for (int i = 1; i <= N.size(); i ++){
		if (N[i - 1] != '1'){
			cout << N[i - 1] << "\n";
			return 0;
		}
		if (i == K){
			cout << "1\n";
			return 0;
		}
	}
	
	return 0;
}
