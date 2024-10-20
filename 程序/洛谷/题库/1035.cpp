#include<bits/stdc++.h>
using namespace std;

int main(){
	double k,ans = 0;
	cin >> k;
	int i = 1;
	while(ans <= k){
		ans += 1.0 / i;
		i ++;
	}
	cout << i - 1 << endl;

	return 0;
}

