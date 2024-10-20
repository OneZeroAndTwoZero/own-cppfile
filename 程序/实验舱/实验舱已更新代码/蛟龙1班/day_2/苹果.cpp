#include<bits/stdc++.h>
using namespace std;

int main(){
	double n,x,y;
	cin >> n >> x >> y;
	double num = ceil(y/x);
	int other = n - num;
	cout << other << endl;
	
	return 0;
}
