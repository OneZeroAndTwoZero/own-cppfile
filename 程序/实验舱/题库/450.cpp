#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x;
	cin >> n >> x;
	int sum = 0;
	while(n){
		if(n % 10 == x) sum ++;
		n /= 10;
	}
    cout << sum << endl;

	return 0;
}

