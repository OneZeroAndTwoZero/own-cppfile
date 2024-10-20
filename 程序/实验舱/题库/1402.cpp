#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t --){
		int a,b;
		cin >> a >> b;
		int ans = 1;
		for(int i = a;;i = i){
			if(i + 2 < b){
				ans *= 3;
				i += 2;
			}else{
				cout << ans << endl;
				break;
			}
		}
	}

	return 0;
}

