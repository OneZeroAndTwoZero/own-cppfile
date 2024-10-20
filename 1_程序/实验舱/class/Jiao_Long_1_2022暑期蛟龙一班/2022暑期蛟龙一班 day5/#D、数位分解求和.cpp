#include<bits/stdc++.h>
using namespace std;

int n,x,sum = 0;

int main(){
    cin >> n;
    while(n){
    	x = n % 10;
    	n /= 10;
    	sum += x;
	}
	cout << sum << endl;
	
	return 0;
}
