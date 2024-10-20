#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x,sum = 0;
    while(n){
    	x = n % 10;
    	n /= 10;
    	sum += x;
	}
	cout << sum << endl;
	
	return 0;
}
