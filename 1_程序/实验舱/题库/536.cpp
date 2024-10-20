#include<bits/stdc++.h>
using namespace std;

int main(){
	int h1,h2;
	char x,o;
	double tall;
	cin >> h1 >> h2 >> x >> o;
	if(x == 'f'){
		tall = (h1 + 0.948 * h2) / 2.0;
	}else{
		tall = (h1 + h2) * 1.08 / 2.0;
	}
	if(o == 'y'){
		tall = tall * 1.02;
	}
	int ans = floor(tall);
	cout << ans << endl;

	return 0;
}

