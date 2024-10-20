#include<bits/stdc++.h>
using namespace std;

int er(int a){
	for(int i = 0;;i++){
		if(pow(2,i) > a) return i;
	}
}

int main(){
	long long ans = 0;
	int ws = 0;
	for(int i = 13;i > 0;i--){
		ans += pow(2,ws);
		ws += er(i);
	}
	cout << ans << " " << ans % 1000000007 << endl;

	return 0;
}

