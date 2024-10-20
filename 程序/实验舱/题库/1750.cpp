#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,x,y;
	cin >> a >> x >> y;
	int r = x + y;
	int q = r * a - x;
	cout << r << " " << q;

	return 0;
}

