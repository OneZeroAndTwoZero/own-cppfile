#include<bits/stdc++.h>
using namespace std;

int main(){
	int l,n;
	cin >> l >> n;
	int x = -1,d = -1;
	for(int i = 0;i < n;i++){
		int t;
		cin >> t;
		int z = t,y = l - t + 1;
		x = max(x,min(z,y));
		d = max(d,max(z,y));
	} 
	cout << x << " " << d << endl;

	return 0;
}

