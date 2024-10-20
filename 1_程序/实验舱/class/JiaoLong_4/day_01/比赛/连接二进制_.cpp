#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	long long ans = 0;
	int jia = 1;
	int js = 1;
	for(int i = 1,k = 1;i <= n;i++,k ++){
		ans = ans << jia;
		ans += i;
		ans %= 1000000007;
		if(k == js){
			k = 0,js *= 2;
			jia ++;
		}
	}
	cout << ans << endl;

	return 0;
}

