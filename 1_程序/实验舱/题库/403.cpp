#include<bits/stdc++.h>
using namespace std;

int main(){
	int t = 926718;
	int n,try_;
	cin >> n;
	while(n--){
		cin >> try_;
		if(try_ == t){
			cout << "yes" << endl;
			return 0;
		}else{
			if(n != 0) cout << "no" << endl;
			else cout << "lock" << endl;
		}
	}

	return 0;
}

