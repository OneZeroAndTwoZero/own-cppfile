#include<bits/stdc++.h>
using namespace std;

int N, P;
string res = "";

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	cin >> N >> P;
	for (int i = 0; i < N; i ++) res.push_back('0');
	res[0] = '1';
	if (9 * N < P){
		cout << res << "\n";
		return 0;
	}
	P --;
	for (int pos = N - 1; ~pos; pos --){
		while (P && res[pos] < '9'){
			res[pos] ++;
			P --;
		}
	}
	cout << res << "\n";

    return 0;
}
