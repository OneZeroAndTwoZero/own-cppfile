#include<bits/stdc++.h>
using namespace std;

int apple(int m,int n){
	if(m <= 0 || n <= 0) return 0;
	if(m == 1) return n;
	if(n == 1) return 1;
	return apple(m - 1,n - 1) + apple(m,n - 1);
}

int main(){
	int t;
	cin >> t;
	int m,n;
	while(t--){
		cin >> m >> n;
	    cout << apple(m,n) << endl;
    }

	return 0;
}

