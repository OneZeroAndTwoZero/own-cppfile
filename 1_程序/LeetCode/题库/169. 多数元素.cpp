#include<bits/stdc++.h>
using namespace std;

int x,y,n,a;
bool p = 0;

int main(){
	cin >> n;
	cin >> a;
	x = a,y = 1;
	n --;
	while(n --){
		cin >> a;
		if(p){
			p = 0;
			x = a;
		}
		if(a == x) y += 1;
		else y -= 1;
		if(y == 0) p = 1;
	}
	cout << x << endl;

	return 0;
}

