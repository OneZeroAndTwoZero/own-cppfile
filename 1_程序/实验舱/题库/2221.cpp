#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int ans = 0;
	while(n --){
		string op;
		cin >> op;
		if(op == "../"){
			ans = max(ans - 1,0);
		}else if(op == "./"){
			ans = ans;
		}else{
			ans ++;
		}
	}
	cout << ans << endl;

	return 0;
}

