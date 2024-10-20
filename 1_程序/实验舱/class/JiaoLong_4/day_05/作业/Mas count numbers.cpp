#include<bits/stdc++.h>
using namespace std;

long long ans,check;

int main(){
	scanf("%lld",&check);
	ans = check;
	for(int i = 1;i * i <= check;i++){
		ans --;
	}
	cout << ans << endl;

	return 0;
}

