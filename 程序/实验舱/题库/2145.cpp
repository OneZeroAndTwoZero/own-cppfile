#include<bits/stdc++.h>
using namespace std;

int fan(int a){
	if(a == 0) return 0;
	int s = 0;
	while(a){
		s *= 10;
		s += a % 10;
		a /= 10;
	}
	return s;
}

int main(){
	int a,b;
	cin >> a >> b;
	int ans = a * b;
	cout << fan(ans) << endl;

	return 0;
}

