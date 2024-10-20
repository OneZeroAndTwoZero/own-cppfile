#include<bits/stdc++.h>
using namespace std;

int n,m;

int main(){
	cin >> n >> m;
	for(int i = 1;i <= 100;i++){
		if((i * 10 + 36005) % n == 0 || (i * 10 + 36005) % m == 0){
			cout << "36" << i << "5" << endl;
		}
	}
	
	return 0;
}
