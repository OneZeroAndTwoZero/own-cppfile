#include<bits/stdc++.h>
using namespace std;

int main(){
	double ans = 0;
	double a = 1;
	for(int i = 0;i < 100;i++){
		ans += a;
		a = a * 0.9;
		cout << ans << endl;
	}

	return 0;
}

