#include<bits/stdc++.h>
using namespace std;

int n,best,t,a,a_b,b,d;

int main(){
    cin >> n;
    t = n,a = 100,b = 0;
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
