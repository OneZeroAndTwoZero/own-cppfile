#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int best;
    cin >> n;
    int t = n;
    int a=100;
    int a_b;
    int b = 0;
    int d;
    while(n){
    	cin >> d;
    	if(d == 0){
    		b += 1;
		}
		if(abs(d) <= a){
			a = abs(d);
			a_b = t - n + 1; 
		}
		n--;
	}
	if(b != 0){
		cout << b<< endl;
	}else{
		cout << 0 << endl;
		cout << a_b << endl;
	}
	
	return 0;
}
