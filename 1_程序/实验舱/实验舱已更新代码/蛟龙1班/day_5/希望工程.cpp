#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a = 0;
    int sum = 0;
    while(sum < n){
    	++a;
    	sum += a;
	}
	cout << a << endl;
	
	return 0;
}
