#include<bits/stdc++.h>
using namespace std;

double a,b,c,d;

int main(){
    cin >> a >> b >> c >> d;
    while((c - a) > 0){
    	b *= 1 + d / 100;
    	c --;
	}
	cout << b << endl;
	
	return 0;
}
