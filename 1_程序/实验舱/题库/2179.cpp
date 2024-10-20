#include<bits/stdc++.h>
using namespace std;

int main(){
	int o,t;
	cin >> o >> t;
	int h1 = o / 100,h2 = t / 100;
	int m1 = o % 100,m2 = t % 100;
	int hc = h2 - h1;
	int mc = m2 - m1;
	if(mc < 0){
		hc --;
		mc += 60;
	} 
	if(hc / 10 == 0) cout << 0;
	cout << hc << ':';
	if(mc / 10 == 0) cout << 0;
	cout << mc << endl;

	return 0;
}

