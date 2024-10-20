#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,ws = 0;
	cin >> n;
	while(n){
		int ws_ = 0;
		int tem = n;
		while(tem){
			ws_ ++;
			tem /= 10;
		}
		ws += ws_;
		n /= 2;
	}
	cout << ws << endl;

	return 0;
}

