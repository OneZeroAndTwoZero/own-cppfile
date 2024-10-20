#include<bits/stdc++.h>
using namespace std;

int a[105];

int he(int a){
	int ans = 0;
	while(a){
		ans += a % 10;
		a /= 10;
	}
	return ans;
}

int main(){
	char tem;
	int k = 0;
	int he_t = 0;
	while(cin >> tem){
		a[k ++] = tem - '0';
		he_t += a[k - 1];
	}
	while(he_t >= 10){
		he_t = he(he_t);
	}
	cout << he_t << endl;

	return 0;
}

