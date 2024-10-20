#include<bits/stdc++.h>
using namespace std;

long double ans0[1005] = {0},ans1[1005] = {0};
int n;

void out(long double a){
	if(!a) return;
	out(floor(a / 10));
	cout << a - 10 * floor(a / 10);
}

int main(){
	ans0[1] = ans1[1] = 1;
	cin >> n;
	for(int i = 2;i <= n;i++){
		ans0[i] = ans0[i - 1] + ans1[i - 1];
		ans1[i] = ans0[i - 1];
	}
	long double ans = ans0[n] + ans1[n];
	out(ans);

	return 0;
}

