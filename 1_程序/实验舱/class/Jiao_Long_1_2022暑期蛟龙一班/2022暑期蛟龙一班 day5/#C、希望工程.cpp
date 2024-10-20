#include<bits/stdc++.h>
using namespace std;

int n,a = 0,sum = 0;

int main(){
    cin >> n;
    while(sum < n){
    	++a;
    	sum += a;
	}
	cout << a << endl;
	
	return 0;
}
