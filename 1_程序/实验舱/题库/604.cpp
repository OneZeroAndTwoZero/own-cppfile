#include<bits/stdc++.h>
using namespace std;

bool ok(int n){
	if(n == 2) return 1;
	if(n % 2 == 0 || n < 2) return 0;
	for(int i = 2;i * i <= n;i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main(){
	int n,m;
	cin >> n >> m;
	int gs = 0;
	for(int i = n;i <= m - 2;i ++){
		if(ok(i) && ok(i + 2)){
			gs ++;
			cout << i << " " << i + 2 << endl;
		}
	}
	if(!gs){
		cout << -1 << endl;
	}

	return 0;
}

