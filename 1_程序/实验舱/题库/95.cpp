#include<bits/stdc++.h>
using namespace std;

int main(){
	int n = 0,m;
	cin >> m;
	int x = 1;
	while(1){
		x *= 2;
		n ++;
		if(x >= m){
			cout << n << endl;
			return 0;
		}
	}
	
	return 0;
}
