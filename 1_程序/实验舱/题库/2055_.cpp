#include<bits/stdc++.h>
using namespace std;

int cz(int a){
	if(a == 0) return 0;
	int ans = 0;
	for(int i = 0;;i++){
		if(pow(2,i) <= a && pow(2,i + 1) > a){
			ans = i;
			ans += cz(a - pow(2,i)) + 1;
			break;
		}
	}
	return ans;
}

int main(){
	int m;
	cin >> m;
	while(m --){
		int n;
		cin >> n;
		cout << cz(n) << endl;
	}

	return 0;
}

