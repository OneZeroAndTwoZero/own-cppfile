#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < 100;i++){
		int c = 36005 + i*10;
		if(c % n == 0 || c % m == 0){
			cout << c << endl;
		}
	}
	
	return 0;
}
